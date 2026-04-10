#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &nums)
{
    int n = nums.size();
    int left = 0;
    vector<int> ans;

    while (left < n)
    {
        int right = left+1;
        bool leader = true;
        while (right < n)
        {
            if (nums[left] > nums[right])
            {
                right++;
            }
            else
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            ans.push_back(nums[left]);
        }
        left++;
    }
    return ans;
}
int main()
{
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leaders(nums);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}