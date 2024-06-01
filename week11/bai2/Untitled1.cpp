void insertback(SinglyLinkedListNode* head, int data){
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* a = head;
    if (head == NULL){
         head = new_node;
         return;
    }
    
        while (a->next != NULL){
            a = a->next;
        }
        a->next = new_node;
    return;
   
}

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    vector <int> value;
    while (head1 !=NULL){
        value.push_back(head1->data);
        head1 = head1->next;
    }
    while (head2 != NULL){
        value.push_back(head2->data);
        head2= head2->next;
    }
    
    sort(value.begin(),value.end());
    int len = value.size();
    SinglyLinkedListNode* a = new SinglyLinkedListNode(value[0]);
    for (int i = 1 ; i < len; i ++){
        SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
	    SinglyLinkedListNode* b = a;
	    if (a == NULL){
	         a = new_node;
	         break;
	    }
	    
        while (b->next != NULL){
            b = b->next;
        }
	    b->next = new_node;
	    break
    }
    return a;
}