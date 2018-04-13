#include <iostream>
using namespace std;
class Solution {
 public:
  int titleToNumber(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); ++i) {
      res = (s[i] - 'A' + 1) + res * 26;
    }
    return res;
  }
};
int main() {
  Solution s;
  cout << s.titleToNumber("A");
  return 0;
}