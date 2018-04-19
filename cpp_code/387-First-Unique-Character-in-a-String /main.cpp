#include <iostream>
#include <vector>
using namespace std;

//class msg{
// public:
//  int cnt = 0;
//  int idx = -1;
//};
//
//class Solution {
// public:
//  int firstUniqChar(string s) {
//    vector<msg> cvec(26);
//    for (int i = 0; i < s.size(); ++i) {
//      cvec[s[i] - 'a'].cnt++;
//      if(cvec[s[i] - 'a'].cnt == 1){
//        cvec[s[i] - 'a'].idx = i;
//      }
//    }
//    int min_idx = -1;
//    for (int j = 0; j < 26; ++j) {
//      if(cvec[j].cnt == 1){
//        if(min_idx > cvec[j].idx || min_idx == -1){
//          min_idx = cvec[j].idx;
//        }
//      }
//    }
//
//    return min_idx;
//
//  }
//};

class Solution {
 public:
  int firstUniqChar(string s) {
    vector<int> cnts(128, 0);
    for(auto c : s) {
      ++cnts[c];
    }
    for(int i = 0; i < s.size(); ++i) {
      if (cnts[s[i]] == 1) {
        return i;
      }
    }
    return -1;
  }
};


int main() {
  Solution s;
  cout << s.firstUniqChar("aa");
  return 0;
}