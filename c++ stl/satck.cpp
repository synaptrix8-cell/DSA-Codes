#include <bits/stdc++.h>
using namespace std;


void explainStack(){
    stack<int>st;
    
    st.push(1);       //these all are for push something in stack
    st.push(2);          //these all are for push something in stack  
    st.push(3);         //these all are for push something in stack
    st.push(3) ;       //these all are for push something in stack
    st.emplace(5);       //these all are for push something in stack          //{5,3,3,2,1}
    
    cout<<st.top();     //prints 5  ...which is on the top

    st.pop();           //remove the top item

    cout<<st.top();

    cout<<st.size();    //gives the size of the stack

    cout<<st.empty();    // it checks whethere this stack is empty or not

    stack<int>st1,st2;      
    st1.swap(st2);          //it just   swap the element of the stack

    

}