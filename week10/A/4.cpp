#include <bits/stdc++.h>
#define taskname ""
#define ll long long

using namespace std;
const int N = 1e5 + 7;

int* createPointerToLocalVariable() {
    int localVar = 5; // Biến địa phương
    int* ptr = &localVar; // Con trỏ trỏ tới biến địa phương
    return ptr;
}

int main()
{
//	if(ifstream(taskname".inp")){
//	freopen(taskname".inp", "r", stdin);
//	freopen(taskname".out", "w", stdout);
//	}
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int* dynamicPtr = createPointerToLocalVariable(); // Tạo con trỏ trỏ tới biến địa phương
    // Sau khi kết thúc hàm createPointerToLocalVariable(), biến địa phương localVar bị giải phóng

    // Thử truy cập vào vùng nhớ được trỏ bởi dynamicPtr
    std::cout << *dynamicPtr << std::endl; // Kết quả không xác định, có thể là giá trị ngẫu nhiên hoặc lỗi runtime

    // Giải phóng con trỏ động
    delete dynamicPtr; // Lỗi: dynamicPtr trỏ tới vùng nhớ của biến địa phương đã bị giải phóng trước đó

	
	return 0;
}
