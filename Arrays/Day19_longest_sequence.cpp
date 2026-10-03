#include<iostream>
#include<vector>
using namespace std;

class solution{
  public:
  int longest_sequence(vector<int>& nums){
    if(nums.empty())
    return 0;
    int ans = -1;
    int count = 1;
    for(int i = 1; i<nums.size();i++){
      if(nums[i] == nums[i-1] +1){
        count++;
      }
      else if(nums[i] != nums[i-1]){
        count = 1;
      }
      ans = max(ans, count);
    }
    return ans;
  }
};