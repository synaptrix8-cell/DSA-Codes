#include<bits/stdc++.h>
using namespace std;

void MoveZero(vector<int> & nums){
      int i=0;

       for(int j=0 ;j<nums.size();j++){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
            }
       }
       while(i<nums.size()){
        nums[i]=0;
        i++;
       }
      
}

int main(){
    vector<int> nums={0,0,2,3,4,1,1,0,0,6,6,4,5,0};
    MoveZero(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
    cout<<endl;

    return 0;
}