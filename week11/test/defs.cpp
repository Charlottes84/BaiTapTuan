#include "defs.h"


void SLinkedList :: Print() const
{
    for(Node *p = head; p != nullptr; p = p->next)
    {
        cout << p -> element << " ";
    }
}