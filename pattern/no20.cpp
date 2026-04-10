#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout<<endl;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {

            for (int k = 0; k <= i; k++)
            {
                cout << "*";
            }
            for(int j=0;j<2*n-2-2*i;j++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<"*";
            }

            cout << endl;
        }
        else
        {

            for (int k = n - 1; k > i - n; k--)
            {
                cout << "*";
            }
            for(int j=0;j<(i-n+1)*2;j++){
                cout<<" ";
            }
             for (int k = n - 1; k > i - n; k--)
            {
                cout << "*";
            }

            cout << endl;
        }

    }
    return 0;
}