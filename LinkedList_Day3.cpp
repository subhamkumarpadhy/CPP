/*
    Q. reverse the linkedlist by k-groups code studio

Node *kReverse(Node *head, int k) {

    // base case
    if (head == NULL)
    {
        return NULL;
    }

    // step1: reverse first k nodes
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    int count = 0;
    int size = 0;


    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    if (k > size)
    {
        // If k is greater than the size, return the head as-is
        return head;
    }


    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step2: recursion
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }

    // step3: retirn head of reversed list
    return prev;
}

*/


#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if (this -> next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with value " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d) {

    // If list is empty

    if (tail == NULL) {

        Node* temp = new Node(d);
        tail = temp;
        temp -> next = tail;
    }

    else {

    // For non-empty list

        //Assuming the given element is present in the list

        Node* curr = tail;
        while (curr -> data != element)
        {
            curr = curr -> next;
        }
        
        // Element found
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
    
}

void deleteNode(Node* &tail, int value) {

    // List is empty
    if (tail == NULL) {

        cout << "The list is empty, please check again." << endl;
        return;
    }
    
    else {

        // Assuming that the value is present in the list

        Node* prev = tail;
        Node* curr = prev -> next;

        while (curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }
        
        prev -> next = curr -> next;
        
        // It is for 1 node
        if (curr == prev)
        {
            tail = NULL;
        }
        

        // It is for >= 2 nodes
        if (tail == curr)
        {
            tail = prev;
        }
        
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail) {

    Node* temp = tail;

    // Empty list
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    
    do
    {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while (tail != temp);

    cout << endl;
    
}

bool isCircularList(Node* head) {

    // empty list
    if (head == NULL)
    {
        return true;
    }
    
    Node* temp = head -> next;

    while (temp != NULL && temp != head)
    {
        temp = temp -> next;
    }
    
    if (temp == head)
    {
        return true;
    }

    return false;
}

int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    // print(tail);
    insertNode(tail, 3, 5);
    // print(tail);
    insertNode(tail, 5, 7);
    // print(tail);
    insertNode(tail, 7, 9);
    // print(tail);
    insertNode(tail, 5, 6);
    // print(tail);
    insertNode(tail, 9, 10);
    // print(tail);
    insertNode(tail, 3, 4);
    print(tail);

    // deleteNode(tail, 5);
    // print(tail);


    if (isCircularList(tail))
    {
        cout << "It is a circular LinkedList." <<  endl;
    }
    else
    {
        cout << "The List is not a circular LinkedList." << endl;
    }

    return 0;
}