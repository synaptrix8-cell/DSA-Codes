#include<bits/stdc++.h>
using namespace std;

void printing(int n){
    if(n==0){
        return;
    }
    cout<<"jit"<<endl;
    n-=1;
    printing(n);
}
int main(){
    printing(5);
    return 0;
}