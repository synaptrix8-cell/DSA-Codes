#include<bits/stdc++.h>
using namespace std;

void linearSearch(vector<int>&arr){
    int targetNum;
    cout<<"enter target num: "<<endl;
    cin>>targetNum;
    int count=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==targetNum){
            count++;
        }
    }
    if(count>0){
        cout<<"it is found "<<count<<" times"<<endl; 
    }
    else{
        cout<< "it is not found"<<endl;;
    }
}

int main(){
    vector<int> arr={2,3,4,5,6,7,4,4,4,8,9,2,3,43,4,5,6,7,7};
    linearSearch(arr);
    return 0;
}