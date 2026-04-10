#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> &nums)
{
    int sum = 0;
    int max = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (max < sum)
        {
            max = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
        // if(max<0){
        //     max=0;
        // }
    }
    return max;
}
int main()
{
    vector<int> nums = {-2, -3, -7, -2, -10, -4};
    cout << maxSubArraySum(nums)<<endl;
    return 0;
}