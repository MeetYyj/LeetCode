#include <iostream>
#include <vector>
using namespace std;



class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int res = 0;
    int n = prices.size();
    for(int i = 1; i < n; i++){
      if(prices[i] > prices[i-1])
        res += prices[i] - prices[i-1];
    }
    return res;
  }
};

//class Solution {
// public:
//  int maxProfit(vector<int>& prices) {
//    if(prices.size() <= 1)
//      return 0;
//
//    int res = 0;
//    int buy_price = prices[0];
//    int last_price = prices[0];
//    bool buy_flag = false;
//    for (int i = 1; i < prices.size(); ++i) {
//      if(!buy_flag && prices[i] > last_price){
//        buy_flag = !buy_flag;
//        buy_price = last_price;
//      } else if(buy_flag && prices[i] < last_price){
//        buy_flag = !buy_flag;
//        res += last_price - buy_price;
//      } else{
//      }
//      last_price = prices[i];
//    }
//    if(buy_flag){
//      buy_flag = !buy_flag;
//      res += last_price - buy_price;
//    }
//    return res;
//
//  }
//};
//



vector<int> ivec = {};
//vector<int> ivec = {1, 2, 5, 3, 1, 4};

int main() {
  Solution s;
  cout << s.maxProfit(ivec);
  return 0;
}