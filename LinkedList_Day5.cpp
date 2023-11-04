// Function to remove duplicates from sorted singly linked list.
Node *removeDuplicates(Node *head)
{
    // empty case
    if (head == NULL)
    {
        return NULL;
    }

    Node *curr = head;

    while (curr != NULL)
    {

        if (curr->next != NULL && curr->data == curr->next->data)
        {

            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete (nodeToDelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

// Function to remove duplicates from unsorted singly linked list.

Node *removeDuplicates(Node *head)
{
    // empty case
    if (head == NULL)
    {
        return head;
    }

    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        Node *temp = curr;
        while (temp->next != NULL)
        {
            if (curr->data == temp->next->data)
            {
                Node *next_next = temp->next->next;
                Node *nodeToDelete = temp->next;
                delete (nodeToDelete);
                temp->next = next_next;
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

/* 
    This code gives me TLE with O(n^2) TC , soo i have done it through Hashtable. I use map also but that also gives
    TLE. So with the help of AI i solved it tbh as i don't know hash table yet.

*/

Node *removeDuplicates(Node *head)
{

    unordered_set<int> seen;

    // Initialize two pointers: current and previous.
    Node *current = head;
    Node *previous = nullptr;

    // Traverse the linked list.
    while (current != nullptr)
    {
        // If the current element is not in the hash table, add it to the hash table
        // and move the pointers forward.
        if (!seen.count(current->data))
        {
            seen.insert(current->data);
            previous = current;
            current = current->next;
        }
        else
        {
            // Delete the current node from the linked list and update the previous
            // pointer.
            previous->next = current->next;
            delete current;
            current = previous->next;
        }
    }

    // Return the head of the linked list.
    return head;
}


//Function to split a circular linkedlist into 2 halves & no. of nodes(N) = even.
void splitCircularList(Node *head)
{
    //edge case
    if(head == NULL)
    {
        return;
    }

    Node* slow=head;
    Node* fast=head->next;

    while(fast!=head&&fast->next!=head){
    slow=slow->next;
    fast=fast->next->next;
    }

    Node* head2=slow->next;
    slow->next=head;
    fast->next=head2;

    return;
}
