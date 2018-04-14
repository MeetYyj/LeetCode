#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
 public:
  bool isAnagram(string s, string t) {
    vector<int> alpha(26, 0);
    for (int i = 0; i < s.size(); ++i) {
      alpha[s[i] - 'a']++;
    }
    for (int j = 0; j < t.size(); ++j) {
      alpha[t[j] - 'a']--;
    }
    for (int k = 0; k < 26; ++k) {
      if(alpha[k] != 0)
        return false;
    }
    return true;


  }
};

int main() {
  Solution s;
  cout << s.isAnagram("cat", "tac");
  return 0;
}