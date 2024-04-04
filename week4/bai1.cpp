#include <bits/stdc++.h>
#define taskname ""
#define endl "\n"
#define ll long long
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define ROF(i,a,b) for(int i = a; i >= b; i--)
using namespace std;
const int N = 1e4 + 7;

int a[N];

int main ()
{
//	if(ifstream(taskname".inp")){
//	freopen(taskname".inp", "r", stdin);
//	freopen(taskname".out", "w", stdout);
//	}
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	FOR(i, 1, N) cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
			if(a[i] == a[j])
			{
				cout << "YES";
				return 0;
			}
	}
	
	cout << "NO";
	
	return 0;
}
