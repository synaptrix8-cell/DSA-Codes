#include<bits/stdc++.h>
using namespace std;

int getmax(vector<int> &nums){
    int max=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
}
int totalSum(vector<int>&nums,int divisor){
      int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=(nums[i]+divisor-1)/divisor;
    }
    return sum;
}
int smallestDivisor(vector<int>&nums,int limit){
     int low=1;
     int high=getmax(nums);
     int ans=high;
     while(low<=high){
        int mid=low+(high-low)/2;
        int total=totalSum(nums,mid);
        if(total<=limit){
            ans=mid;
            high=mid-1; 
        }
        else{
            low=mid+1;
        }

     }
     return ans;
}

int main(){
    vector<int> nums={8,4,2,3};
    cout<<smallestDivisor(nums,10)<<endl;
    return 0;
}