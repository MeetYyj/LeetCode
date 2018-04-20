#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    if(prices.size() <= 1)
      return 0;
    int max_proift = 0;
    int low = prices[0];
    for (int i = 1; i < prices.size(); ++i) {
      if(prices[i] - low > max_proift){
        max_proift = prices[i] - low;
      }
      if(prices[i] < low){
        low = prices[i];
      }

    }

    return max_proift;
  }
};

int main() {
  vector<int> prices = {7,1,5,3,6,4};

  Solution s;
  cout << s.maxProfit(prices);
  return 0;
}