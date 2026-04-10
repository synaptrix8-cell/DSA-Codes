#include<bits/stdc++.h>
using namespace std;

void printing(int n,int i){
    if(n==0){
        return;
    }
    cout<<i<<endl;
    i+=1;
    n-=1;
    printing(n,i);
}
int main(){
    printing(5,1);
    return 0;
}