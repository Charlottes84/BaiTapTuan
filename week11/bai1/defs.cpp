#include "defs.h"

using namespace std;

void SLinkedList :: Print()
{
    for(Node *p = head; p != nullptr; p =  p->next)
        cout << p->element << " - ";
    cout << endl;
}

void SLinkedList :: addFirst(const char* s)
{
    Node* newNode = new Node; // cấp phát động bộ nhớ
    newNode->element = s;
    newNode->next = head;
    head = newNode;
}

const char *SLinkedList :: removeFirst()
{
    if(head == nullptr)
        return nullptr;
    
    Node *oldHead = head;
    head = head->next;
    const char* oldElement = oldHead->element;
    delete oldHead;
    return oldElement;
}

Node *SLinkedList :: addLast(const char* s) 
{
    Node *newNode = new Node(s, nullptr);
    if(head == nullptr) head = newNode;
    else 
    {
        Node *last = head;
        while(last->next != nullptr) last = last->next;
        last->next = newNode;			
    }
    return newNode;
}

Node *SLinkedList :: insertAfter(const char *s, Node * oldNode)
{
    Node *newNode = new Node(s, oldNode->next);

    oldNode->next  = newNode;
    return newNode;
}