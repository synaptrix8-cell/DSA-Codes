#include<bits/stdc++.h>
using namespace std;


// every element of a set is unique and organized(sorted)

void explainSet(){

    set<int>st;
    st.insert(1);        //{1} 
    st.emplace(2);       //{1,2}
    st.insert(2);        //{1,2}        //it doesn't insert 2 bcz 2 is not unique , it is present already.
    st.insert(4);        //{1,2,4}
    st.insert(3);        //{1,2,3,4}    //it is sorted


    //functionality of insert in vector 
    //can be used also , that only increases efficiency

    //begin(), end(), rbegin(), rend(), size(),empty(), and swap() are the same as those above


    //{1,2,3,4,5}
    auto it=st.find(3);      //it will find 3 in wole set amd return the itrator of the number.

    //{1,2,3,4,5}
    auto it=st.find(6);      // it will check and if it is not present then it will go to after of the last term of this set.In this set it will go to after 5.

    st.erase(5);                //erases 5 //takes logarithmic time

    int cnt=st.count(1);        //it is unique so it is like it give me that this number(in our syntax it is 1) is present or not in this set so if present it gives 1 and if not then it will gives 0. 

    auto it=st.find(3);
   
    st.erase(it);              //it takes constant time

    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1, it2);         //after erase {1,4,5} [first,last)

    //lower_bound() and upper_bound() function works in the same way2
    //as in vector it does 

    //this is the syntax
    auto it =st.lower_bound(2);

    auto it=st.upper_bound(3);

} 

