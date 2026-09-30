#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
   void Zeroshift(vector<int>& nums){
   int ans = 0;
   for (int i = 0;i <nums.size();i++){
    if(nums[i] !=0){
      nums[ans++]=nums[i];
    }
   }
   while(ans<nums.size()){
    nums[ans++]=0;
   }
   }
};