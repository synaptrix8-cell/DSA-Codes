#include <bits/stdc++.h>
using namespace std;

void sumK(int ind, vector<int> &nums, int k, int sum, vector<int> &ds, int n)
{
    if (ind >= n)
    {
        if (sum == k)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
           
        }
         return;
    }
    ds.push_back(nums[ind]);
    sum += nums[ind];
    sumK(ind + 1, nums, k, sum, ds, n);
    ds.pop_back();
    sum -= nums[ind];
    sumK(ind + 1, nums, k, sum, ds, n);
}

int main()
{
    vector<int> nums = {4, 9, 2, 5, 1};
    vector<int> ds;
    int n = nums.size();
    sumK(0, nums, 10, 0, ds, n);
    return 0;
}