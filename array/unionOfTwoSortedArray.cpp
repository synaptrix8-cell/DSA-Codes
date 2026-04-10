#include<bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>&a,vector<int>&b){
    vector<int>ans;
    int i=0; int j=0;
    while(i<a.size()&&b.size()){
        if(a[i]==b[j]){
           i++;
           j++;
           ans.push_back(a[i]);
        }
        else if(a[i]>b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]<b[j]){
           ans.push_back(b[j]);
           j++;
        }
    }
}