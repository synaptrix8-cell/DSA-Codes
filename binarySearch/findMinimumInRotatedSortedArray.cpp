#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
  int low = 0;
  int n = nums.size();

  int high = n - 1;
  int ans = nums[low];
  int times;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (nums[low] <= nums[mid])
    {

      if (nums[low] < ans)
      {
        ans = nums[low];
        times = low;
      }

      low = mid + 1;
    }

    else
    {
      high = mid - 1;

      if (nums[mid] < ans)
      {
        ans = nums[mid];
        times = mid;
      }
    }
  }
  return times;
}

int main()
{
  vector<int> nums = {3, 4, 5, 1, 2};
  cout << findMin(nums) << endl;
  return 0;
}