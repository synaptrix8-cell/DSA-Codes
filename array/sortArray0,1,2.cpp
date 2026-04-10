#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>&nums){
    int zeroCnt=0;
    int oneCnt=0;
    int twoCnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
             zeroCnt++;
        }
        else if(nums[i]==1){
            oneCnt++;
        }
        else{
            twoCnt++;
        }
    }
       int i=0;
        while(zeroCnt--){
            nums[i]=0;
            i++;
        }
        while(oneCnt--){
            nums[i]=1;
            i++;
        }
        while(twoCnt--){
            nums[i]=2;
            i++;
        }
    
}

int main(){
    vector<int> nums={0, 2, 1, 2, 0, 1};
    sortArray(nums);
    for(int x:nums){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}