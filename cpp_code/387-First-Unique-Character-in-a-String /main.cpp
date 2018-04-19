#include <iostream>
#include <vector>
using namespace std;

class msg{
 public:
  int cnt = 0;
  int idx = -1;
};

class Solution {
 public:
  int firstUniqChar(string s) {
    vector<msg> cvec(26);
    for (int i = 0; i < s.size(); ++i) {
      cvec[s[i] - 'a'].cnt++;
      if(cvec[s[i] - 'a'].cnt == 1){
        cvec[s[i] - 'a'].idx = i;
      }
    }
    for (int j = 0; j < 26; ++j) {
      if(cvec[j].cnt == 1){
        return cvec[j].idx;
      }
    }
    return -1;

  }
};


int main() {
  Solution s;
  cout << s.firstUniqChar("leetcode");
  return 0;
}