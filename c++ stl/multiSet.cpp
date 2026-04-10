#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){

    //everything is as same as set
    // only diff is it stores duplicate element also


    multiset<int>ms;
    ms.insert(1);      //{1}
    ms.insert(1);      //{1,1}
    ms.insert(1);      //{1,1,1}

    ms.erase(1);      //al 1 will be erased

    int cnt=ms.count(1);     //it is not unique so it will show us how many of given number is present in this multiset.

    //only a single one is erased
    ms.erase(ms.find(1));


    ms.erase(ms.find(1),ms.find(1)+2);          
   
   
            /*multiset for range based deletion:

            this won't work because ms.find(1) + 2 is invalid in the context of a multiset.

            ms.find(1) gives you an iterator to the first occurrence of 1 in the multiset.
            
            But you can't add integers (like + 2) to an iterator directly in this case,
            
            because iterators are not like simple pointers that can be incremented by an integer for ranges.
            
            Correct Approach:
            
            To erase a range of elements in a multiset, you need two iterators that define the range. 
            
            Here's how you can do it: Find the first element (iterator to the first 1) Find the second 
            
            element (iterator to the third 1, for example).multiset<int> ms = {1, 1, 1, 2, 3);
            
            auto it1 = ms.find(1);
            
            // First occurrence of 1
            
            auto it2 = next(it1, 2);
            
            // Move iterator to 2nd occurrence of
            
            1
            
            ms.erase(it1, it2);
            
            // Erases two 1s
            
            After this:
            
            ms = {1,2, 3}; // Only the 1, 2 and 3 remain */




    //rest all function is same as set
 
 

}