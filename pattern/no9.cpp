#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2*n; i++)
    {
        if(i<n){
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    else{
         for (int j = n; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 2*n-1; k >2*(i-n); k--)
        {
            cout << "*";
        }
         for (int j = n; j <i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    }
    return 0;
}