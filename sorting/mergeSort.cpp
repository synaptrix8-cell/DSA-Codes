#include<bits/stdc++.h>
using namespace std;


//void mergeSort(arr,low,high){
//if(arr[low]>=arr[high]){return};      //base statement for recursion..

//int low=0;
//int high=n-1;
//int mid=(high+low)/2;
//mergeSort(arr,low,mid);            //recursion for first part..
//mergeSort(arr,mid+1,high);         //recursion for second part..
//merge(arr,low,mid,high);----------->->->->->->->->-->_>-._>_._>void merge(arr,low,mid,high){
// temp={};
//int left=low;
//int right=mid+1;
//while(left<=mid && right<=high){
// if(arr[left]<=arr[right]){
//     temp.push_back(arr[left]);
//       left++;}
// else{ temp.push_back(arr[right])
//       right++};
//}
//while(left<=mid){temp.push_back(arr[i])
//   left++;
//}
//while(right<=high){temp.push_back(arr[i])}
//for (int i=low;i<=high;i++){ arr[i]=temp[i-low];  }
//}
//}

void merge(vector<int> &arer ,int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arer[left]<=arer[right]){
            temp.push_back(arer[left]);
            left++;
        }
        else{
            temp.push_back(arer[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arer[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arer[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arer[i]=temp[i-low];
    }
}
void mS(vector<int> &arer ,int low,int high){
   if(arer[low]>=arer[high]){
    return;
   }
   int mid=(low+high)/2;
    mS(arer,low,mid);
    mS(arer,mid+1,high);
    merge(arer,low,mid,high);
   
}

void mergeSort(vector<int> &arer){
    mS(arer,0,arer.size()-1);
}



int main(){
    vector<int> arer={2,1,4,5,6,7,9,8,7,6,3};
    int n=arer.size();
    mergeSort(arer);
    for(int x : arer){
        cout<<x<<" ";
    }
   
    cout<<endl;
    return 0;

}