#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
 public:
  bool isHappy(int n) {
    unordered_set<int> n_set;
    while (n != 1){
      if(n_set.count(n) == 0){
        n_set.emplace(n);
      } else {
        return false;
      }
      int tmp = n;
      n = 0;
      while(tmp != 0){
        n += (tmp % 10) * (tmp % 10);
        tmp /= 10;
      }
      cout << n << endl;
    }
    cout << endl;
    return true;
  }
};

int main() {
  Solution s;
  cout << s.isHappy(25);
  return 0;
}