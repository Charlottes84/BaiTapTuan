#include <bits/stdc++.h>
#define taskname ""
#define endl "\n"
#define ll long long
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define ROF(i,a,b) for(int i = a; i >= b; i--)
using namespace std;
const int maxn = 1e5 + 7;

bool check(int n)
{
	int a[10] = {}, len = 0;
	while(n != 0)
	{
		a[++len] = n%10;
		n /= 10;
	}
	int i = 1, j = len;
	while(i < j)
	{
		if(a[i] != a[j]) return false;
		i++; j--;	
	} 
	return true;
}

void Solve()
{
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	for(int i = a; i <= b; i++)
		if(check(i)) cnt++;
	cout << cnt << endl;
}

int main()
{
//	if(ifstream(taskname".inp")){
//	freopen(taskname".inp", "r", stdin);
//	freopen(taskname".out", "w", stdout);
//	}
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t; cin >> t;
	while(t--) Solve();
	
	return 0;
}
