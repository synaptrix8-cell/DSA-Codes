#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
          return false;  
        }
        
    }
    return true;
}
int main(){
    vector<int> arr={3,4,5,1,2};
    cout<<checkSorted(arr)<<endl; 
}