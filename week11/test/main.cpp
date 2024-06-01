#include <iostream>
#include "defs.h"

using namespace std;

int main()
{
    cout << "Hi";
    SLinkedList list;
    list.addFirst("Vienna");
    list.addFirst("Paris");
    list.Print();
}