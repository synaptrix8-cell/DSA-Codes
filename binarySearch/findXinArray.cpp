#include<bits/stdc++.h>
using namespace std;

//first see pointer approach....................

int pBs(vector<int> &nums,int target){
    int n=nums.size();
    int high=n-1;
    int low=0;
    
   
    // int target;
    // cout<<"enter target element: "<<endl;
    // cin>>target;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return -1;
    
}

//lets see recursive approach...................

/*
int rBs(vector<int> &nums,int low,int high,int target){
      int mid=low+(high-low)/2;
    if(low>high){
        return -1;
    }

    // int target;
    // cout<<"enter target element: "<<endl;
    // cin>>target;

    
    if(nums[mid]==target){
         return mid;
    }
    else if(nums[mid]<target){
       return rBs(nums,mid+1,high,target);
    }
    else{
        return rBs(nums,low,mid-1,target);
    }
}
*/

int main(){
    vector<int> nums={2,3,4,5,12,34,45,67,89};
    int n=nums.size();
    cout<<pBs(nums,45)<<endl;;
   //cout<<rBs(nums,0,n-1,45)<<"  this is recursive approach"<<endl;
}
