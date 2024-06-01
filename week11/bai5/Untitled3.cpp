#include <bits/stdc++.h>
#define taskname ""
#define ll long long

using namespace std;
const int N = 1e5 + 7;

struct Node {
    int value;
    Node *next;
};

struct SLinkedList
{
	Node* head;
	SLinkedList() {
		head = nullptr;
	}
	
	void addFirst(int *x) {
		Node* newNode = new Node;
		newNode -> value = *x;
		newNode -> next = head;
		head = newNode; 
	}
	
	void Print()
	{
		for(Node* p = head; p != nullptr; p = p -> next) {
			cout << p -> value << " ";
		}
		cout << endl;
	}
};

int main()
{
//	if(ifstream(taskname".inp")){
//	freopen(taskname".inp", "r", stdin);
//	freopen(taskname".out", "w", stdout);
//	}
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	SLinkedList list;
	int n; cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		list.addFirst(&x);
	}
	
	list.Print();
	
	return 0;
}
