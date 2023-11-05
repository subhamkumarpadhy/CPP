// Check if LinkedList is Palindrome or not
// Approach - 1 with TC = O(n) & SC O(n)

#include <vector>
class Solution
{
private:
    bool checkPalindrome(vector<int> arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        while (start <= end)
        {
            if (arr[start] != arr[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }

public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        vector<int> arr;

        Node *temp = head;
        while (temp != NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return checkPalindrome(arr);
    }
};

// Approach - 2 with TC = O(n) & SC = O(1)
class Solution
{
private:
    Node *getMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if (head->next == NULL)
        {
            return true;
        }

        // step-1 get middle
        Node *middle = getMid(head);

        // step-2 reverse after middle
        Node *temp = middle->next;
        middle->next = reverse(temp);

        // step-3 cmpair both half
        Node *head1 = head;
        Node *head2 = middle->next;

        while (head2 != NULL)
        {
            if (head1->data != head2->data)
            {
                return false;
            }

            head1 = head1->next;
            head2 = head2->next;
        }

        // step-4 repeat step-2 || it is an optional step
        temp = middle->next;
        middle->next = reverse(temp);

        return true;
    }
};

//Function to add 2 numbers represented by LL
class Solution
{
private:
    Node *reverse(Node *head)
    {

        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(struct Node *&head, struct Node *&tail, int val)
    {

        Node *temp = new Node(val);
        // empty list
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    struct Node *add(struct Node *first, struct Node *second)
    {
        int carry = 0;

        Node *ansHead = NULL;
        Node *ansTail = NULL;

        while (first != NULL || second != NULL || carry != 0)
        {

            int val1 = 0;
            if (first != NULL)
                val1 = first->data;

            int val2 = 0;
            if (second != NULL)
                val2 = second->data;

            int sum = carry + val1 + val2;

            int digit = sum % 10;

            // create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;
            if (first != NULL)
                first = first->next;

            if (second != NULL)
                second = second->next;
        }
        return ansHead;
    }

public:
    // Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // step 1 -  reverse input LL
        first = reverse(first);
        second = reverse(second);

        // step2 - add 2 LL
        Node *ans = add(first, second);

        // step 3
        ans = reverse(ans);

        return ans;
    }
};
