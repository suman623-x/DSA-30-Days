#include<iostream>
#include<vector>
using namespace std;
class solution{
  public:
  int majorelements(vector<int>& nums){
    int majority = 0;
    int count = 0;
    for(int i =0;i<nums.size();i++){
      if(count == 0)
      majority == nums[i];
      if(nums[i] == majority)
      count++;
      else 
      count --;
    }

  return majority;
  }
};