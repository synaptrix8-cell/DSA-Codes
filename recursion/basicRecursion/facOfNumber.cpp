#include<bits/stdc++.h>
using namespace std;

int summ(int n){
    if(n==0){
        return 1;
    }
   return {n*summ(n-1)};
}
int main(){
    cout<<summ(5)<<endl;
    return 0;
}