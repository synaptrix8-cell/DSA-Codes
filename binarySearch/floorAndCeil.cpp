#include<bits/stdc++.h>
using namespace std;

//for ceil.....................         //[smallest no in an array >= target.]

int foundCeil(vector<int> & nums,int target){
   int low=0; 
   int n=nums.size();
   int high=n-1;
   int ans=-1;
   while(low<=high){
    int mid=low+(high-low)/2;
    if(nums[mid]==target){
        return nums[mid];
    }
    else if(nums[mid]<target){
        low=mid+1;
    }
    else{
        ans=nums[mid];
        high=mid-1;
    }
   }
   return ans;
}

int main()
{
    vector<int> nums = {2, 3, 4,4,4,4,9,12,15,17,22,29,34};
    cout<<foundCeil(nums,4)<<endl;
    return 0;
}



//for floor...........................          //[largest no in an array <= target]

/*
int foundFloor(vector<int>&nums,int target){
    int low=0;
    int n=nums.size();
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
              return nums[mid];
             
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
           ans=nums[mid];
            low=mid+1;
        }
        
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 3, 4,4,4,4,9,12,15,17,22,29,34};
    cout<<foundFloor(nums,16)<<endl;
    return 0;
}
    */