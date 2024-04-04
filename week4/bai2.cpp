#include <bits/stdc++.h>
#define taskname ""
#define endl "\n"
#define ll long long
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define ROF(i,a,b) for(int i = a; i >= b; i--)
using namespace std;
const int N = 1e2 + 7;


int main ()
{
//	if(ifstream(taskname".inp")){
//	freopen(taskname".inp", "r", stdin);
//	freopen(taskname".out", "w", stdout);
//	}
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	char a[N]; cin >> a;
	int n = strlen(a);
	
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - i - 1])
		{
			cout << "NO";
			return 0;
		}
	}
	
	cout << "YES";
	
	return 0;
}
