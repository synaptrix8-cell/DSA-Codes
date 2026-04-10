#include <bits/stdc++.h>
using namespace std;

int searchInRotatedSorted(vector<int> &nums, int target)
{
    int low = 0;
    int n = nums.size();
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[low] <= nums[mid])
        {                               // either left part is sorted..
            if (nums[mid] > target && nums[low] <= target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {                              // otherwise right part is  sorted..
            if (nums[mid] < target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << searchInRotatedSorted(nums, 0) << endl;
    return 0;
}