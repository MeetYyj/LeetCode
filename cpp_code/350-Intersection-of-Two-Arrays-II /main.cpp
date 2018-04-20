#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
 public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> m_map;
    vector<int> res;
    for (int i = 0; i < nums1.size(); ++i) {
      ++m_map[nums1[i]];
    }
    for (int i = 0; i < nums2.size(); ++i) {
      if(m_map[nums2[i]] != 0){
        --m_map[nums2[i]];
        res.push_back(nums2[i]);
      }
    }

//
//    auto m_it = m_map.begin();
//    while (m_it != m_map.end()){
//      cout <<  (*m_it).first << " " << (*m_it).second << endl;
//      ++m_it;
//    }
//




    return res;
  }
};

int main() {
//  vector<int> nums1 = {1, 2, 2, 1};
//  vector<int> nums2 = {2, 2};
  vector<int> nums1 = {1};
  vector<int> nums2 = {1, 1};

  Solution s;
  vector<int> res = s.intersect(nums1, nums2);
  for (int i = 0; i < res.size(); ++i) {
    cout << res[i] << " ";
  }

  return 0;
}