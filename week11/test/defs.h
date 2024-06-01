#ifndef _DEFS_H
#define _DEFS_H

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    const char *element;
    Node *next;

    Node(const char *s, Node *n) 
    {
        element = s;
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

    void addFirst(const char *s) 
    {
        head = new Node(s, head);
    }
        
    void Print() const;
    
};



#endif