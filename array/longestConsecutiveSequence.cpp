#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    if (nums.size() == 0)
    {
        return 0;
    }
    int maxi = 1;
    int left = 0;
    int n = nums.size();
    while (left < n)
    {
        int right = left;
        int cnt = 1;
        while (right < n - 1)
        {
            if (nums[right + 1] == nums[right])
            {
                right++;
            }
            else if (nums[right + 1] == nums[right] + 1)
            {
                cnt++;
                right++;
            }
            else
            {
                break;
            }
        }
        maxi = max(maxi, cnt);
        left = right + 1;
    }
    return maxi;
}

int main(){
    vector<int>nums={0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout<<longestConsecutive(nums)<<endl;
    return 0;
}