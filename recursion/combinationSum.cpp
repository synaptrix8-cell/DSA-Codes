#include <bits/stdc++.h>
using namespace std;

void sumK(int ind, vector<int> &nums, int rem, vector<int> &ds, int n)
{
    if (ind >= n)
    {
        if (rem == 0)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    if (rem >= nums[ind])
    {
        ds.push_back(nums[ind]);
        sumK(ind, nums, rem - nums[ind], ds, n);
        ds.pop_back();
    }
    sumK(ind + 1, nums, rem, ds, n);
}

int main()
{
    vector<int> nums = {2, 3, 6, 7};
    vector<int> ds;
    int n = nums.size();
    sumK(0, nums, 7, ds, n);
    return 0;
}