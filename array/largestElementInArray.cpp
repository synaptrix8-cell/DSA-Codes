#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int(n)) {
int largest=arr[0];
for (int i=1;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
return largest;
}

int main(){
vector<int> arr={3,4,66,6,7,8};
cout<<largestElement(arr,6)<<endl;
return 0;

}

