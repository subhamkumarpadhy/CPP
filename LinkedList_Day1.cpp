/*  */


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
};



// Function to add an element at the beginning of linkedlist

void insertAtHead(Node* &head, int d) {

    // Creating a new node
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

// Function to add an element at the end of linkedlist

void insertAtTail(Node* &tail, int data) {

     // Creating a new node
    Node* temp = new Node(data);

    tail -> next = temp;
    tail = temp;
}


// Print function to traverse & display the elements of linkedlist
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    
}

// Function to add an element at the middle of a linkedlist
void insertAtMiddle(Node* &tail, Node* &head, int position, int data) {

    // Insearting at start case handle
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    // Insearting at tail case handle
    if (temp -> next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    
    
     // Creating a new node
    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

int main() {

    // created a new node
    Node* node1 = new Node(50);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // Created a new pointer head & pointing to node1
    Node* head = node1;

    // Created a new pointer head & pointing to node1
    Node* tail = node1;

    // print(head);
    // insertAtHead(head, 53);
    // print(head);
    // insertAtHead(head, 55);
    // print(head);

    print(head);
    insertAtTail(tail, 53);
    print(head);
    insertAtTail(tail, 55);
    print(head);

    insertAtMiddle(tail, head, 2, 54);
    print(head);

    return 0;
    
}