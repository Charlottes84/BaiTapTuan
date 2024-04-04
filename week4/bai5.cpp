#include <bits/stdc++.h>
#define taskname ""
#define ll long long

using namespace std;
const int N = 1e3 + 7;

int a[N][N], n, m;

void Solve()
{
	cin >> m >> n;
	int h1 = 1, h2 = m, c1 = 1, c2 = n;
	int cur = 1;
	while(h1 <= h2)
	{
		for(int i = 1; i <= c2; i++)
		{
			a[h1][i] = cur;
			cur++; 
		}
		h1++;
		for(int i = h1; i <= h2; i++)
		{
			a[i][c2] = cur;
			cur++;
		}
		c2--;
		for(int i = c2; i >= 1; i--)
		{
			a[h2][i] = cur;
			cur++;
		}
		h2--;
		for(int i = h2; i >= h1; i--)
		{
			a[i][c1] = cur;
			cur++;
		}
		c1++;
	}
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int main()
{
//	if(ifstream(taskname".inp")){
//	freopen(taskname".inp", "r", stdin);
//	freopen(taskname".out", "w", stdout);
//	}
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	Solve();
	
	return 0;
}
