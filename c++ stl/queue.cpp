#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int>q;
    q.push(1);        //{1}
    q.push(2);        //{2,4}
    q.emplace(4);     //{1,2,4}

    q.back() +=5;
    cout<<q.back();    // it will print 9  

    //Q is now {1,2,9}
    cout<<q.front();       //prints 1

    q.pop();              //{2,9}

    cout<<q.front();     // prints 2

}