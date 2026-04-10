#include <bits/stdc++.h>
using namespace std;

// int sum(vector<int> ds)
// {
//     int sum = 0;
//     for (auto it : ds)
//     {
//         sum += it;
//     }
//     return sum;
// }

void subSet(int ind, vector<int> &nums,int currentSum, vector<int> &ds, vector<int>&ans)
{
    if (ind >= nums.size())
    {
        ans.push_back(currentSum);
        return;
    }
    ds.push_back(nums[ind]);
    subSet(ind + 1, nums,currentSum+nums[ind], ds, ans);
    ds.pop_back();
    subSet(ind + 1, nums,currentSum, ds, ans);
}
vector<int> subSetSum(vector<int>&nums){
    vector<int>ds;
    vector<int>ans;
    subSet(0,nums,0,ds,ans);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int>nums={5,2,1};
    vector<int>ans;
    ans=subSetSum(nums);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}