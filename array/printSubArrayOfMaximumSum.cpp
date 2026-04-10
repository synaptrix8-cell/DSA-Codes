#include <bits/stdc++.h>
using namespace std;

void maxSubArraySum(vector<int> &nums)
{
    int sum = 0;
    int max = INT_MIN;
    int start;
    int ansStart;
    int ansEnd;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += nums[i];

        if (sum > max)
        {
            ansStart = start;
            ansEnd = i;
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
    for (int j = ansStart; j < ansEnd + 1; j++)
    {
        cout << nums[j] << " ";
    }
}
int main()
{
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    maxSubArraySum(nums);
    cout << endl;
    return 0;
}