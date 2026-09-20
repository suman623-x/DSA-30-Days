#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long ans = 0;
        while(i < s.size() && s[i]== ' ') i++;
        if(s[i]== '-' || s[i]=='+'){
            if(s[i]=='-') sign =-1;
            i++;
        } 
        while(i < s.size() && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(ans*sign>INT_MAX) return INT_MAX;
            if(ans*sign<INT_MIN) return INT_MIN;
            i++;
        }
        return ans*sign;
        }
};