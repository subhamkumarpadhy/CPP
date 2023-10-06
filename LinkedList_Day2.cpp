Solved two problems on code studio


Q. Reverse the linked list -> sloved with 3 approaches

    // Approach - 3

Node* reverse1(Node* &head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node* chotaHead = reverse1(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;
}


/*
    // Approach - 2

void reverse(Node* &head, Node* curr, Node* pre) {
    if(curr == NULL) {
        head = pre;
        return;
    }

    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = pre;
}

*/

Node *reverseLinkedList(Node *head) {

    return reverse1(head);

    /*

    // Approach - 2

    Node* curr = head;
    Node* pre = NULL;
    reverse(head, curr, pre);
    return head;

    */



    /*
    
    // Approach - 1

    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node* pre = NULL;
    Node* curr = head;


    while(curr != NULL) {
        Node* forward = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = forward;
    }
    return pre;

    */
}
