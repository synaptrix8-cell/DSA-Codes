#include <bits/stdc++.h>
using namespace std;

int max(vector<int> nums)
{
    int max = nums[1];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}
int totalHr(vector<int> nums, int k)
{
    int totalhr = 0;
    // int mid;
    for (int i = 0; i < nums.size(); i++)
    {
        totalhr += (nums[i] + k - 1) / k;        //it is for getting ceil value....(a+b-1)/b;...instead we can use>>>    ceil((double)a/b);
    }                                                                                                                //double is needed bcz it saves floting point like 7>>>7.00
    return totalhr;
}

int numPerHour(vector<int> &nums, int h)
{
    int low = 1;
    int ans;
    int high = max(nums);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int totalHours = totalHr(nums, mid);
        if (totalHours > h)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {7, 15, 6, 3};
    int n = nums.size();
    cout << numPerHour(nums, 8) << endl;
    return 0;
}