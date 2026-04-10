#include<bits/stdc++.h>
using namespace std;

int getmax(vector<int>&nums){
    int max=0;
    for(int x:nums){
        if(x>max){
            max=x;
        }
    }
    return max;
}
int missingNum(vector<int>&nums,int k){
    int low=1;
    int high=getmax(nums);
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(getmax(nums)-nums.size()>k){
             
        }
        else{
            return k+nums.size();
        }
    }
}