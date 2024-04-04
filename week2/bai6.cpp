#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

const int N = 2e7 + 5;

int main ()
{
    ios_base :: sync_with_stdio(0); cin.tie(0);
    
    int n; cin >> n;
    
   	for (int i = 1; i <= n; i++)
   	{
   		cout << i << " ";
		for(int j = i + 1; j <= n; j++)
		{
			cout << j << " ";	
		}	
		for(int j = 1; j < i; j++)
			cout << j << " ";
		cout << endl;
	}

    return 0;
}