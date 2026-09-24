#include<iostream>
#include<vector>
using namespace std;
class Solution{
  public:
  int doublenumber(vector<int>& nums){
    int ans = 0;
    for(int i =0;i<32;i++){
      int count = 0;
      for(int x : nums)
      if(x & (1<<i))
      count++;
      if(count % 3)
      ans |=(1<<i);
    }
    return ans;
  }
};