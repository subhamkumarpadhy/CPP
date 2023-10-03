/*
    // Concepts of singly linked list

#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this -> data;
        if (this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
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


void deleteNode(int position, Node* &head) {

    // Deleting the first node
    if (position == 1) {
        Node* temp = head;
        head = head -> next;

        // Release the memory of 1st node
        temp -> next = NULL;
        delete temp;
    }

    // Deleting at any middle node or last node
    else {

        // Creating 2 nodes
        Node* current = head;
        Node* previous = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            previous = current;
            current = current -> next;
            cnt++;
        }
        previous -> next = current -> next;

        current -> next = NULL;
        delete current;
    }
}
int main() {

    // created a new node
    Node* node1 = new Node(10);

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
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    insertAtMiddle(tail, head, 4, 22);
    print(head);

    deleteNode(3, head);
    print(head);

    return 0;
    
}

*/


/*
    // Concepts of Doubly Linked List
    
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* pre;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> pre = NULL;
        this -> next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with value " << val << endl;
    }
};

void print(Node* &head) {

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &tail, Node* &head, int data) {

    // To handle the empty list case
    if (head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(data);
        temp -> next = head;
        head -> pre = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int data) {

    // To handle the empty list case
    if (head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> pre = tail;
        tail = temp;
    }
}


void insertAtMiddle(Node* &tail, Node* &head, int position, int data) {
    // Insearting at start case handle
    if (position == 1)
    {
        insertAtHead(tail, head, data);
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
        insertAtTail(tail, head, data);
        return;
    }
    
    
     // Creating a new node
    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next -> pre = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> pre = temp;

}

// Function to get the length of a Linked List
int getLength(Node* &head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp -> next;
    }
    return length;
}


void deleteNode(int position, Node* &head) {

    // Deleting the first node
    if (position == 1) {
        Node* temp = head;
        temp -> next -> pre = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    // Deleting at any middle node or last node
    else {

        // Creating 2 nodes
        Node* curr = head;
        Node* pre = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            pre = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> pre = NULL;
        pre -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}


int main() {
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout << "The length of the linkedlist is " << getLength(head) << endl;

    // insertAtHead(tail, head, 8);
    // print(head);
    // insertAtHead(tail, head, 5);
    // print(head);
    // insertAtHead(tail, head, 2);
    // print(head);

    insertAtTail(tail, head, 12);
    print(head);
    insertAtTail(tail, head, 15);
    print(head);
    insertAtTail(tail, head, 22);
    print(head);


    insertAtMiddle(tail, head, 2, 26);
    print(head);
    insertAtMiddle(tail, head, 1, 45);
    print(head);
    insertAtMiddle(tail, head, 5, 86);
    print(head);

    deleteNode(, head);
    print(head);

    return 0;
}

*/