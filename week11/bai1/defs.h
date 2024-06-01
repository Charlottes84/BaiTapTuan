#ifndef _DEFS__H
#define _DEFS__H

#include <bits/stdc++.h>
using namespace std;

struct Node 
{
	const char *element;
	Node* next;
	
	Node(const char* e = nullptr, Node* n = nullptr) {
		element = e;
		next = n;
	}
};

struct SLinkedList 
{
	Node *head;
	long size;
	
	SLinkedList()
	{
		head = nullptr;
		size = 0;
	}
    void Print();
    void addFirst(const char *s);
	
	const char* removeFirst();
	
	Node *addLast(const char* s);

	Node *insertAfter(const char *s, Node * oldNode);
};

#endif