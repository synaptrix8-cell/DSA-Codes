#include<bits/stdc++.h>
using namespace std;

void missingNumber(vector<int> &arr){
    //int missingNum=-1;
     for (int i=0;i<arr.size()-1;i++){
        if(arr[i]!=arr[i+1]-1){
            // missingNum=arr[i]+1;
            for(int j=arr[i]+1;j<arr[i+1];j++){
                cout<<j<<" ";
            }
            
        }
        
     }
    //  return missingNum;
    cout<<endl;
}

int main(){
    vector<int> arr={1,2,4,5,6,8,9};
    missingNumber(arr);
}

