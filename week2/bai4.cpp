#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i - 1; j++)
            cout << " ";
        int m = (2*n - 1) - 2*(i-1);
        int j = 1;
        while(j <= m)
        {
            cout << "*";
            j++;
        }
        cout << endl;
    }

    return 0;
}