#include <bits/stdc++.h>
using namespace std;

bool Duplicates(vector<int> &nums, int target)
{
    int low = 0;
    int n = nums.size();
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            high = high - 1;
            low = low + 1;
            continue;
        }
        if (nums[mid] == target)
        {
            return true;
        }
        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && nums[mid] < target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target < nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}

int main(){
    vector<int> nums={3,3,1,2,3,3,3};
    cout<<Duplicates(nums,3)<<endl;
    return 0;
}