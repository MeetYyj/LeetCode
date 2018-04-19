#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    int sum = 0;
    for (auto a : nums) {
      sum += a;
    }
    return nums.size() * (nums.size() + 1) / 2 - sum;
  }
};

int main() {
  vector<int> a = {0, 1, 2, 4};
  Solution s;
  cout << s.missingNumber(a);
  return 0;
}