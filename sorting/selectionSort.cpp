#include <bits/stdc++.h>
using namespace std;

void selectonSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n -1; i++)
    {
        int min = i;
        for (int j = i ; j < n ; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
                
            }
        }
        int temp = nums[i];
                nums[i] = nums[min];
                nums[min] = temp;
    }
}

int main()
{
    vector<int> nums = {2,1,4,5,6,7,9,8,7,6,3 };
    selectonSort(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
