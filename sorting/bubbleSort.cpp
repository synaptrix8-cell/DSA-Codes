#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    while (i < n-1)
    {
        // int k = 0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (nums[j+1] < nums[j])
            {
                // swap(nums[j], nums[j+1]);
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
            //k++;
        }
        i++;
    }
}

int main(){
    vector<int> nums={2,1,4,5,6,7,9,8,7,6,3};
    bubbleSort(nums);
    for(int x :nums){
        cout<<x<<" ";
    }
   
    cout<<endl;
    return 0;
}