#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int ans = n;
    int high = n - 1;
    while (low <= high)
    {

        int mid = low + (high - low) / 2;
        
        if (nums[mid] > target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 4, 5, 6,7, 8, 9};
    cout<<upperBound(nums,6)<<endl;
    return 0;
}