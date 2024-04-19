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
	
	 int* p = new int;
	 int* p2 = p;
	 *p = 10;
	 delete p; 
	*p2 = 100; // code bị lỗi ở đây
	 cout << *p2;
	 delete p2;
	 
	 // giải phóng vùng nhớ được trỏ bởi con trỏ p bằng delete p;
	 // con trỏ p2 vẫn trỏ đến vùng nhớ đó. Do đó, khi bạn thử gán giá trị 100 cho vùng nhớ đã được giải phóng thông qua *p2
	 // lỗi undefined behavior, vì vùng nhớ đã bị giải phóng và không còn đảm bảo an toàn cho việc truy cập.

	
	return 0;
}
