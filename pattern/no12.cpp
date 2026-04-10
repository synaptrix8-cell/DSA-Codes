#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
           cout<<j+1;
        }
        for(int j=0;j<2*n-2-2*i;j++){
             cout<<" ";
        }
        for(int k=i+1;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}