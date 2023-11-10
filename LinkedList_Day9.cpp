// mergeSort using LinkedList

/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };

********************************************************************/
node *findMid(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *merge(node *left, node *right)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;

    node *ans = new node(-1);
    node *temp = ans;

    // merge2 sorted linked list
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;

    return ans;
}

node *mergeSort(node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // step-1 break linked list into 2 halfs after finding mid
    node *mid = findMid(head);

    // step -2 break into two halfs
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    // step -3 recursive calls to sort both halfs
    left = mergeSort(left);
    right = mergeSort(right);

    // step -4 merge both the left & right parts
    node *result = merge(left, right);

    // step -5 return ans;
    return result;
}
