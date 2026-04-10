#include<bits/stdc++.h>
using namespace std;

int summ(int n){
    if(n==1){
        return 1;
    }
   return {n+summ(n-1)};
}
int main(){
    cout<<summ(5);
    return 0;
}