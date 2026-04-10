#include <bits/stdc++.h>
 using namespace std;
int longestSubArray(vector<int> &nums, int k)
{
    int maxi=0;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        int cnt = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            cnt++;
            if (sum == k)
            {
               // ds.push_back(cnt);
               maxi=max(maxi,cnt);

                break;
            }
            else if (sum > k)
            {

                break;
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    //vector<int> ds;
    cout<<longestSubArray(nums, k)<<endl;;
    //sort(ds.begin(), ds.end());
   // cout << ds.back() << endl;
    return 0;
}

