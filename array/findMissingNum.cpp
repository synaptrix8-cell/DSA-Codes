#include<bits/stdc++.h>
using namespace std;

void missingNum(vector<int> nums){
    sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                cout<< i;

            }
            else{
                cout<< nums.size();
            }
        }
    }

int main(){
    vector<int> nums={0,1,2,3,4,5,7,8};
    missingNum(nums);
}