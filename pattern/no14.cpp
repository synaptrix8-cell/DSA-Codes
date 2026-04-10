#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
   
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
          cout<<j<<" ";
         
        }
         
        cout<<endl;
    }
    return 0;
}