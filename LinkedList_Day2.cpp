Solved two problems on code studio

    Q.Reverse the linked list->sloved with 3 approaches

        // Approach - 3

        Node *
        reverse1(Node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *chotaHead = reverse1(head->next);

    head->next->next = head;
    head->next = NULL;

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

Node *reverseLinkedList(Node *head)
{

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

Q.Find the middle element of the given LinkedList

    Node *
    getMiddle(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

/*

int getLength(Node *head) {
    int length = 0;
    while (head != NULL) {
        length++;
        head = head->next;
    }
    return length;
}

*/

Node *findMiddle(Node *head)
{

    return getMiddle(head);

    /*

    int length = getLength(head);
    int ans = length/2;

    Node* temp = head;
    int cnt = 0;
    while(cnt < ans) {
        temp = temp -> next;
        cnt++;
    }
    return temp;

    */
}

Q.Reverse the Doubly linked list

Node * reverseDLL(Node *head) {

    if (head == NULL || head->next == NULL)
    {

        return head;
    }

    Node *returnedHead = reverseDLL(head->next);

    head->next->next = head;

    head->next->prev = head->next->next;

    head->prev = head->next;

    head->next = NULL;

    return returnedHead;
}