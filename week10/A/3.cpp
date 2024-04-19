#include <bits/stdc++.h>
#define taskname ""
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
	
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a'; 
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl;

	// lỗi : cố gỡ bỏ vùng nhớ không được cấp phát thông qua con trỏ "c" bằng "detele c" 
	// điều này không hợp lệ vì con trỏ "c" chỉ trỏ đến một phần của mảng được cấp phát, chứ không phải toàn bộ mảng
	return 0;
}
