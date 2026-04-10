#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>&nums){
    for(int i =0;i<nums.size()/2;i++){
        int cnt=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
        if(cnt>nums.size()/2){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    vector<int> nums={0,0,0,1,1,2,2};
    cout<<majorityElement(nums)<<endl;;
    return 0;
}