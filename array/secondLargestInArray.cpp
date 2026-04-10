#include<bits/stdc++.h>
using namespace std;


int SecondLargest(vector<int> &arr,int(n)){
    int largest=arr[0];
    int secondLargest=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==largest){
            arr[i]=-1;
        }
    }
    // for(int i=0;i<n;i++){
    //     if(arr[i]>secondLargest){
    //         secondLargest=arr[i];
    //     }
    // }
    
    return largest;
}

int main(){

    vector<int> arr={2,3,4,5,6,7,8};
    cout<<"largest element: "<<SecondLargest(arr,7)<<endl;
    cout<<"second largest element: " <<SecondLargest(arr,7)<<endl;
}

    






//one more approach......

/*
int secondLargest(vector<int> &arr,int(n)){
    
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            swap (arr[i+1],arr[i]);
        }
        
    }
    return arr[n-2];
}


int main(){
    vector<int> arr={2,3,4,5,6,7,8};
    cout<<secondLargest(arr,arr.size())<<endl;
    return 0;
}

*/







//one more most optimal approach........

/*
int secondLargest(vector<int> &arr){
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    for(int i=0;i<arr.size();i++){
       if (arr[i]>largest){
          secondLargest=largest;
          largest=arr[i];
       }
       else if(arr[i]>secondLargest && arr[i]!=largest){
              secondLargest=arr[i];
          }
         
    }
    return secondLargest;
}

int main(){
    int n;
    cout<<"enter number of element"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"second largst is "<<secondLargest(arr)<<endl;
    return 0;

}
    */








//one more approach......
/*
int secondLargest(vector<int> &arr){
    int largest=INT_MIN;
    for(int i=0; i<arr.size();i++){
       if(arr[i]>largest){
        largest=arr[i];
       }
    }
    int sLargest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>sLargest && arr[i]!=largest){
            sLargest=arr[i];
        }
    }
    return sLargest;
}
int main(){
    int n;
    cout<<"enter number of element"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"second largest is "<<secondLargest(arr)<<endl;
    return 0;

}

*/

