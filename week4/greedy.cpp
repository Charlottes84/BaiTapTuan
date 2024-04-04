#include <bits/stdc++.h>
#define taskname "greedy"
#define ll long long

using namespace std;
const int N = 1e5 + 7;

int main()
{
//	if(ifstream(taskname".inp")){
//	freopen(taskname".inp", "r", stdin);
//	freopen(taskname".out", "w", stdout);
//	}
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int a[100], n, m, b[100];
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
		
	for(int i = 1; i <= n; i++)
	{
		b[i] = 0;
		while (m >= a[i])
		{
			m -= a[i];
			b[i]++;
		}
	}
		
	for(int i = 1; i <= n; i++)
		cout << a[i] << " " << b[i] << endl;
	return 0;
}
