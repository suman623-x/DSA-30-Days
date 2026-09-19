#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    int maxSubArray(vector<int>& nums){
        int sum = 0 ;
        int largest = nums[0];
        for(int i = 0;i <nums.size();i++){
            sum += nums[i];
            if(sum > largest)
            largest = sum;
            if(sum < 0)
            sum = 0;
        }
        return largest;
    }
};