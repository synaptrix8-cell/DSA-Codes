#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &arr){
   int i=0;
   for (int j=1;j<arr.size();j++){
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }
   }
   return(i+1);
}

int main(){
    vector<int>arr={2,3,3,3,4,4,4,4,4,4,5,6,6,6,6,7};
    int newSize=removeDuplicate(arr);
   for (int i=0;i<newSize;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
    
}