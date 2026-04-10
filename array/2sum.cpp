#include <bits/stdc++.h>
using namespace std;

// void twoSum(vector<int> &nums)
// {

//   int target;
//   cin >> target;

//   for (int i = 0; i < nums.size(); i++)
//   {

//     for (int j = i + 1; j < nums.size(); j++)
//     {
//       if (nums[i] + nums[j] == target)
//       {
//         cout << nums[i] << " " << nums[j] << endl;
//       }
//     }
//   }
// }
// int main()
// {
//   vector<int> nums = {2, 3, 4, 5, 6, 7, 8, 9};
//   twoSum(nums);
//   cout << endl;
//   return 0;
// }

////////////////////// by using 2 pointer...........-------->>>>>>>>>

void twoSum(vector<int> &nums)
{
  int i = 0;
  int j = nums.size() - 1;
  int target = 0;
  cin >> target;

  while (i < j)
  {
    int sum = nums[i] + nums[j];
    if (sum == target)
    {
      cout << nums[i] << " " << nums[j] << endl;
      i++;
      j--;
    }
    else if (sum < target)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
}

int main()
{
  vector<int> nums = {2, 3, 4, 5, 6, 7, 8, 9};
  twoSum(nums);
  cout << endl;
  return 0;
}