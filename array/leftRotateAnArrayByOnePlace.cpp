#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &nums){
   int  temp=nums[0];
     int n=nums.size();
    for(int i=1;i<n;i++){
          nums[i-1]=nums[i];
    }
    nums[n-1]=temp;
            
}

int main(){
      vector<int> nums={1,2,3,4,5,6};
      rotateArray(nums);
      for(int num:nums){
            cout<<num<<" ";
      }
      cout<<endl;
}