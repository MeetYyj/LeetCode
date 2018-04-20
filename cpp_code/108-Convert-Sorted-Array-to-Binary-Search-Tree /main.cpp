#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      return getHelper(nums, 0, nums.size() - 1);
    }
 private:
  TreeNode* getHelper(vector<int>& nums, int start, int end){
    if(start > end){
      return NULL;
    }
    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = getHelper(nums, start, mid - 1);
    root->right = getHelper(nums, mid + 1, end);
    return root;
  }
};


int main() {

  vector<int> nums = {-10,-3,0,5,9};
  Solution s;
  TreeNode* root = s.sortedArrayToBST(nums);
  queue<TreeNode*> q;
  q.push(root);
  while(!q.empty()){
    TreeNode* tmp = q.front();
    cout << tmp->val << " ";
    q.pop();
    if(tmp->left){
      q.push(tmp->left);
    }
    if(tmp->right){
      q.push(tmp->right);
    }
  }
  return 0;
}