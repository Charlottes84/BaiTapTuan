#include <bits/stdc++.h>
#define taskname "insertionSort"
#define ll long long

using namespace std;
const int N = 1e5 + 7;

int a[100], n;
void Solve()
{
	// 11 12 13 5 6
	for(int j = 2; j <= n; j++)
	{
		int i = 1; 
		while(a[j] > a[i])
			i += 1;
		int m = a[j]; 
		for(int k = 0; k <= j - i - 1; k++)
			a[j - k] = a[j - k - 1]; 
			
		a[i] = m; 
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

	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
		Solve();
	for(int i = 1; i <= n; i++)
		cout << a[i] << " ";
	
	return 0;
}
