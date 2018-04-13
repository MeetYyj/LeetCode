#include <iostream>
#include <vector>
using namespace std;
class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    int cnt_zero = 0;
    for (int i = 0; i < nums.size(); ++i) {
      if(nums[i] == 0){
        cnt_zero++;
      }else{
        nums[i - cnt_zero] = nums[i];
      }
    }
    for (int j = nums.size() - cnt_zero; j < nums.size(); ++j) {
      nums[j] = 0;
    }
  }
};

vector<int> ivec= {0, 1, 0, 3, 12};

int main() {
  Solution s;
  s.moveZeroes(ivec);
  return 0;
}