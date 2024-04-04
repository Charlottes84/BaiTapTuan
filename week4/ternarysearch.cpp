#include <bits/stdc++.h>
#define taskname "ternarysearch"
#define ll long long

using namespace std;
const int N = 1e5 + 7;

int a[N], n;

void Solve()
{
	cin >> n; 
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	
	int l = 1, r = n;
	while(l < r)
	{
		int m1 = l + (r - l)/3;
		int m2 = r - (r - l)/3;
		
		
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
