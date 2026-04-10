#include <bits/stdc++.h>
using namespace std;


void explainPairs(){
    pair<int,int>p={1,3};

    cout<<p.first<<" "<<p.second;

    pair<int, pair<int,int>>q={1,{3,4}};
    
    cout<<q.first<<" "<< q.second.first<<" "<< q.second.second;

    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;


}