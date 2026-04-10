#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout<<endl;
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        if (i < n)
        {

            for (int k = 0; k < n-i; k++)
            {
                cout << "*";
            }
            for(int j=0;j<2*i;j++){
                cout<<" ";
            }
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }

            cout << endl;
        }
        else
        {

            for (int k = 0; k < i - n+1; k++)
            {
                cout << "*";
            }
            // for(int j=0;j<.2*n;j++){
            //     cout<<" ";
            // }
             for (int k = 0; k < i - n+1; k++)
            {
                cout << "*";
            }

            cout << endl;
        }

    }
    return 0;
}