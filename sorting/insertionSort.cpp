#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j - 1], nums[j]);

            j--;
        }
    }
}

int main()
{
    vector<int> nums = {2, 1, 4, 5, 6, 7, 9, 8, 7, 6, 3};
    insertionSort(nums);
    for (int x : nums)
    {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}