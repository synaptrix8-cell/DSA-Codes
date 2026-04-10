#include <bits/stdc++.h>
using namespace std;

void sumK(int ind, vector<int> &nums, int target, vector<int> &ds, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = ind; i < nums.size(); i++)
    {
        if (i > ind && nums[i] == nums[i - 1])
        {
            continue;
        }
        if (nums[i] > target)
        {
            break;
        }
        ds.push_back(nums[i]);
        sumK(i + 1, nums, target - nums[i], ds, ans);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>&nums,int target){
    vector<int>ds;
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    sumK(0,nums,target,ds,ans);
    return ans;
}

int main()
{
    vector<int> nums = {10, 1, 2, 7, 6, 1, 5};
    vector<int> ds;
    vector<vector<int>>ans;
    ans=combinationSum2(nums,8);
    for(auto &it:ans){
        for(auto &num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}