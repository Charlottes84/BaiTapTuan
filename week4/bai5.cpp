#include<iostream>

using namespace std;

const int N = 5e2 + 1;

void create_spiral_board(int m, int n)
{
	int a[N][N];
	int dong = m, cot = n, k = 1, p = 0, i, j;
	while(k <= m*n){
		for(i = p; i < cot; i++) 
			a[p][i] = k++;
		for(i = p+1; i < dong; i++) 
			a[i][cot-1] = k++;
		if ( p != dong-1){
			for(i = cot-2; i >=p; i--) 
				a[dong-1][i] = k++;
		}	
		if(p!=cot-1){
			for(i = dong-2; i > p; i--) 
				a[i][p] = k++;
		}	
		p++;dong --; cot --;
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int main() {
	int m, n;
	cin >> m >> n;
	create_spiral_board(m, n);
}