#include <bits/stdc++.h>
#define taskname ""
#define ll long long

using namespace std;
const int N = 1e3 + 7;

char a[N][N], b[N][N]; int c[N][N]; 
int dx[] = {1, 1, 0, 0, -1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 0, 0, 1, -1};

void Solve()
{
	int m, n;
	cin >> m >> n;
	for(int i = 1; i <= m; i++)	
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(a[i][j] != '*')
			{
				//cout << "Bug : " << i << " " << j << endl;
				int cnt = 0;
				for(int k = 0; k < 8; k++)
				{
					int x = dx[k] + i; // 2
					int y = dy[k] + j; // 3
					//cout << x << " " << y << endl;
					if((x > n || y > m) || (x < 1 || y < 1)) 
						continue;
					else 
					{
						if(a[i][j] == '.' && a[x][y] == '*')
							cnt++; 
					} 
				}
				b[i][j] = char(cnt + '0');
				c[i][j] = cnt;
			}
			else {
				b[i][j] = '*';
				c[i][j] = -1;
			}
		}
	}	
	
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
			cout << b[i][j] << " ";
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
