#include<iostream>
#include<map>
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

// This algo detect the loop in O(n) TC & O(n) Sc

bool detectLoop(Node* head) {

    //empty case
    if (head == NULL)
    {
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while (temp != NULL)
    {
        //loop is present
        if (visited[temp] == true)
        {
            cout << "Present on element: " << temp -> data << endl;
            return true;
        }
        
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}


// The algorithm called as Flyod's Cycle Detection, which detect the loop in O(1) SC & TC is O(n);

Node* flyodCycleDetect(Node* head) {

    // empty case
    if (head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if (fast != NULL)
        {
            fast = fast -> next;
        }
        
        slow = slow -> next;
        if (slow == fast)
        {
            cout << "Present at " << slow -> data << endl;
            return slow;
        }
        
    }
    
    return NULL;
}


Node* StartingLoopNode(Node* head) {

    //empty case
    if (head == NULL)
    {
        return NULL;
    }
    
    Node* getmeet = flyodCycleDetect(head);
    Node* slow = head;

    while (slow != getmeet)
    {
        slow = slow -> next;
        getmeet = getmeet -> next;
    }
    return slow;
}

Node* removeLoop(Node* head) {

    //empty case

    if (head == NULL)
    {
        return NULL;
    }

    Node* startPointLoop = StartingLoopNode(head);
    Node* temp = startPointLoop;

    while (temp -> next != startPointLoop)
    {
        temp = temp -> next;
    }
    temp -> next = NULL;

}

int main() {

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 53);
    insertAtHead(head, 55);
    insertAtHead(head, 45);

    tail -> next = head -> next;

    // if (detectLoop(head))
    // {
    //     cout << "Loop is present" << endl;
    // }
    // else
    // {
    //     cout << "Loop is not present" << endl;
    // }


    if(flyodCycleDetect(head))
    {
        cout << "Loop is present" << endl;
    }
    else
    {
        cout << "Loop is not present" << endl;
    }


    Node* loop = StartingLoopNode(head);
    cout << "Loop starts at: " << loop -> data << endl;

    removeLoop(head);
    print(head);

    return 0;
    
}



