#include <bits/stdc++.h>
using namespace std;

int max(vector<int> nums)
{
    int max = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}

int minDays(vector<int> &nums, int k, int m)
{
    if (m * k > nums.size())
    {
        return -1;
    }
    int low = 1;
    int high = max(nums);
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int k_counter = 0;
        int m_counter = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (mid >= nums[i])
            {
                k_counter++;
                if (k_counter >= k)
                {
                    m_counter++;
                    k_counter = 0;
                }
            }
            else
            {
                k_counter = 0;
            }
        }
        if (m_counter >= m)
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

    vector<int> nums = {1, 10, 3, 10, 2};
    cout << minDays(nums, 2, 3) << endl;
    return 0;
}