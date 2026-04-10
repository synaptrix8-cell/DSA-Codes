#include<bits/stdc++.h>
using namespace std;
int nThRoot(int n,int m){
    int low=1;
    int high=m;
    
    while(low<=high){
        long long val=1;
        int mid=low+(high-low)/2;
        for(int i=0;i<n;i++){
            val=val*mid;
            if(val>m){    //this will stop ove3rflow if it exicidews the required value....
                break;
            }
        }
        if(val==m){
            return mid;
            
        }
        else if(val>m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
   return -1;
}
int main(){
    cout<<nThRoot(4,69)<<endl;
}