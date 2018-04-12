#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseString(string s) {
      reverse(s.begin(), s.end());
      return s;
    }
};

int main() {
  Solution s;
  cout << s.reverseString("hello");
  return 0;
}