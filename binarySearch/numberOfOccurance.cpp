#include <bits/stdc++.h>
using namespace std;

// target=12
int firstOccurance(vector<int> &nums, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return first;
}
int lastOccurance(vector<int> &nums, int n, int target)
{
    int low = 0;
    int high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int> &nums, int n, int target)
{
    int first = firstOccurance(nums, n, target);
    if (first == -1)
    {
        return {-1, -1};
    }
    int last = lastOccurance(nums, n, target);
    return {first, last};
}

int main()
{
    vector<int> nums = {2, 3, 4, 12, 12, 12, 12, 12, 56, 67};
    int n = nums.size();
    pair<int, int> ans = firstAndLastPosition(nums, n, 12);
    int num=(ans.second-ans.first)+1;
    cout << num << endl;
    return 0;
}