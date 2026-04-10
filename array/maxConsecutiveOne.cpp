#include<bits/stdc++.h>
using namespace std;

int maxConsicutive(vector<int> arr){
    
    
    int count=0;
    int maxOne=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count+=1;
            if(maxOne<count){
            maxOne=count;
            }
        }
        else if(arr[i]==0){
            count=0;
        }
    }
    return maxOne;

}


int main(){
  vector<int>arr={1,1,1,0,1,1,0,0,0,1,1,1,1,1,0};
  cout<<maxConsicutive(arr)<<endl;
}
