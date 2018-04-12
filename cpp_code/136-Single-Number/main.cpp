#include <iostream>
#include <vector>
using namespace std;
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int res = 0;
    for (auto a : nums) {
      res ^= a;
    }
    return res;
  }
};

int main() {
  vector<int> ivec = {1, 2, 2, 3, 3};
  Solution s;
  cout << s.singleNumber(ivec) << endl;
  return 0;
}