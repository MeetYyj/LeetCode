#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//class Solution {
// public:
//  int majorityElement(vector<int>& nums) {
//    sort(nums.begin(), nums.end());
//    return nums[(nums.size())/2];
//  }
//};

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    int major_idx = 0;
    int cnt = 1;
    for (int i = 1; i < nums.size(); ++i) {
      if(nums[major_idx] == nums[i]){
        cnt++;
      } else {
        cnt--;
      }
      if(cnt == 0){
        cnt = 1;
        major_idx = i;

      }
    }
    return  nums[major_idx];
  }
};


vector<int> ivec = {1, 1, 2, 2, 1, 1, 3};


int main() {
  Solution s;
  cout << s.majorityElement(ivec);
  return 0;
}