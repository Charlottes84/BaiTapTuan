#include <bits/stdc++.h>
#include "defs.h"

using namespace std;

struct SLinkedListWithTail
{
	Node* head;
	Node* tail;

	SLinkedListWithTail() 
	{
		head = nullptr;
		tail = nullptr;
	}

	void Print()
	{
		for(Node *p = head; p != nullptr; p =  p->next)
			cout << p->element << " - ";
		cout << endl;
	}

	void addFirst(const char *s)
	{
		head = new Node(s, head);
		if(tail == nullptr) tail = head;
	}

	Node *addLast(const char *s)
	{
		Node* newNode = new Node(s, nullptr);
		if(head == nullptr) head = newNode;
		else tail->next = newNode;
		tail = newNode;
		return newNode;
	}

	const char *RemoveLast()
	{
		if(head != tail)
		{
			Node *secondLast = head;
			while(secondLast->next != tail) secondLast = secondLast->next;


			const char *OldData = tail->element;
			delete tail;

			tail = secondLast;
			tail->next = nullptr;

			return OldData;
		}
		else if(head != nullptr) 
		{
			const char *OldData = tail->element;
			delete tail;
			head = nullptr;
			tail = nullptr;
			return OldData;
		}
		else return nullptr;
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
	
	list.addLast("Rome");
	Node *seattle = list.addLast("Seattle");
	list.addLast("Tonroro");
	list.Print();

	list.insertAfter("Vienna", seattle);
	list.Print();
	
	return 0;
}
