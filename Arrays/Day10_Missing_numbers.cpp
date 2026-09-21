#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int Missingnumber(vector<int>& nums){
        int n = nums.size();
        int sum = n*(n+1) / 2;
         for(int x : nums)
         sum -= x;
         return sum;
    }
};