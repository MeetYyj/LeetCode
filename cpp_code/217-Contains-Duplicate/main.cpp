#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> us_nums(nums.cbegin(), nums.cend());
    return !(us_nums.size() == nums.size());
  }
};

// sort

int main() {
  vector<int> a= {};
  Solution s;
  cout << s.containsDuplicate(a);
  return 0;
}