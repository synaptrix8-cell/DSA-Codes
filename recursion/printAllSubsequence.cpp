#include <bits/stdc++.h>
using namespace std;

void printF(int index, vector<int> &nums, vector<int> &ds, int n)
{
    if (index >= n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout<<endl;
        return;
    }
    ds.push_back(nums[index]);
    printF(index + 1, nums, ds, n);
    ds.pop_back();
    printF(index + 1, nums, ds, n);
}

int main()
{
    vector<int> nums = {1, 2, 3};
    int n = 3;
    vector<int> ds;
    printF(0, nums, ds, n);
    return 0;
}