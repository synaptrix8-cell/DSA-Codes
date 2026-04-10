#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    
    vector<int>v;            //it jusst define a vector with empty

    v.push_back(1);
    v.emplace_back(2);      //both push back an element in this empty vector

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);          //this is the diff btw pushback and emplace_back -----emplace_back can push with pair but push_back can't
    
    vector<int>v(5);               //{0,0,0,0,0}
    
    vector<int>v(5,100);           //{100,100,100,100,100}
    vector<int>v1(v);              //copy of v but new container

    vector<int>::iterator it=v.begin();       //iterator is like it defines memory location {1,2,3,4,5},,,,if we cout this without doing i++ then it will give (1) as an output.

    it++;
    cout<<*(it)<<" ";                         // * is for like defining the iterator  -- 2(output)....if we do cout<<*(v.begin()) then it will print the memory location of this iterator.

    it=it+2;                                  
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();          // v.end is will point the right after the vector ends  so if i do i-- then it will give the vslue of last term . like our exm it's output will be 5(after doing the i--)
    
    vector<int>::iterator it=v.rend();         //it is reverse end so it is same like v.begin but in this it pointing just before the vector start , so if we do i++ then we will get (1) as an output.
    
    vector<int>::iterator it=v.rbegin();       // it is like opposite of begin , just it start at the end and then it come across the vector.

    cout<<v[0]<<" " <<v.at(0);                 //v[0] means at 0 iteration of the vector == 1,,,,v[1]=2,,just like that. v.at(0) it is ame as v[0] but it is not much anyone use.

    cout<<v.back()<<" ";                      //it is the last element of a vector

    

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){        //it is a loop for print entire vector
        cout<<*(it)<<" ";
    }

    for(auto i =v.begin(); i!=v.end();i++){                          // it is like shortcut so we need to type vector<int>::iterator this instead just type auto and it will do the same.
        cout<<*(i)<<" ";
    }


    for(auto i:v){                 //it is for h loop so it does the same task.
        cout<<i<<" ";
    }

    

    //{10,20,12,23}
    v.erase(v.begin()+1);      //output=={10,12,23}

    //{1,2,3,4,5,6}
    v.erase(v.begin()+2,v.begin()+4);   // //{1,2,5,6}   [start , end)

    //insert function

    vector<int>v(2,100);  //{100,100}
    v.insert(v.begin(),300);   //{300,100,100}
    v.insert(v.begin()+1,50);   //{300,50,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,50,100,100}

    vector<int> copy(2,50);     //{50,50}               //copy  is the basically name of the vector.
    v.insert(v.begin(),copy.begin(),copy.end());       //{50,50,300,10,10,50,100,100}


    //{10,20}
    cout<<v.size();   //2   give number of element in the vectror rn.


    //{10,20}
    v.pop_back();     //{10}   pop_back the last element

    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2);   //v1 -> {30,40} ,v2 -> {10,20}

    v.clear();   //erases the entire vector.

    cout<<v.empty();     // it is for like checking if the vector is empty or not....if it has atleast one element then it will give false otherwise true.


}