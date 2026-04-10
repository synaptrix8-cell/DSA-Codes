#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {

            for (int k = 0; k <= i; k++)
            {
                cout << "*";
            }

            cout << endl;
        }
        else
        {

            for (int k = n - 1; k > i - n; k--)
            {
                cout << "*";
            }

            cout << endl;
        }
    }
    return 0;
}