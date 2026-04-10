#include<bits/stdc++.h>
using namespace std;

// int  oneInTwice (vector<int> &nums){
//    for (int i=0;i<nums.size();i++){
//       for(int j=i+1;j<nums.size();j++){
//         if(nums[i]!=nums[j]){{
//            nums[i+1]=nums[j];
//            return i+2;
//         }
           
//         }
//         }
//    }
   
// }




// int main(){
//     vector<int> nums={2,2,3,4,4,5,5,6,6,7,7};
//     int sumNormal=0;
//     for (int i=0;i<nums.size();i++){
//          sumNormal+=i;
//     }
//     cout<<sumNormal;
//     int unique=oneInTwice(nums);
//     cout<<oneInTwice(nums)<<endl;
//     int sumRenew=0;
//     for(int i=0;i<unique;i++){
//        sumRenew+=i;
//     }

//     cout<<"missing number is: "<<2*sumRenew-sumNormal<<endl;
//   return 0;
//}




int onceInTwice(vector<int> & nums){
   for(int i=0;i<nums.size();i++){
      int count=0;
      for(int j=0;j<nums.size();j++){
         if(nums[i]==nums[j]){
             count++;
         }
      
      }
      if(count==1){
         return nums[i];
      }
      
   }
   return -1;
}

int main(){
   vector<int> nums={1,1,2,2,3,4,4,5,5,6,6};
   cout<<onceInTwice(nums)<<endl;
}