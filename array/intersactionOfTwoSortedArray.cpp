#include<bits/stdc++.h>
using namespace std;

vector<int>intersaction(vector<int> &a,vector<int>&b){
   vector<int>ans;
   int i=0;int j=0;

   while(i<a.size()&& j<b.size()){
    if(a[i]==b[j]){
        ans.push_back(a[i]);
      i++;
      j++;
    }
    else if(a[i]<b[j]){
        i++;
    }
    else if(b[j]<a[i]){
        j++;
    }
   }
   return ans;
 
}

int main(){
    vector<int> a={2,3,4,5,6},b={1,2,3,6,7,8};
    vector<int>result=intersaction(a,b);
    for(int x:result){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;

    }



