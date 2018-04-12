#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
      vector<string> vec;
      for (int i = 1; i <= n; ++i) {
        if(i % 15 == 0){
          vec.push_back("FizzBuzz");
        } else if(i % 5 == 0){
          vec.push_back("Buzz");
        } else if(i % 3 == 0){
          vec.push_back("Fizz");
        } else{
          vec.push_back(to_string(i));
        }
      }
      return vec;
    }
};
int main() {
  Solution s;
  vector<string> svec = s.fizzBuzz(15);
  for (auto str : svec) {
    cout << str << endl;

  }
  return 0;
}