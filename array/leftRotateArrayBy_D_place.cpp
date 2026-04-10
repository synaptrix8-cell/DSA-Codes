//left rotate an array by D place.....


#include<bits/stdc++.h>
using namespace std;


void rotateArray(vector<int> &nums){
    int d=0;
    cout<<"enter desired value of D: "<<endl;
    cin>>d;
    int n=nums.size();
    int  temp=0;
    
    
    int i=1;
    while(i<d+1){
    temp=nums[0];
    for(int j=1;j<n;j++){
         nums[j-1]=nums[j];
    }
    nums[n-1]=temp;
    i++;
    }
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    rotateArray(nums);
    for(int i=0;i<nums.size();i++){
         cout<<nums[i];
    }
    cout<<endl;
    return 0;
}
