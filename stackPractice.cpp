// Two stack input to only one single array
#include <bits/stdc++.h>
class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initialize TwoStack.
    TwoStack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = size;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};

// Reverse a string using stack
char *reverse(char *S, int len)
{
    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        st.push(S[i]);
    }
    for (int i = 0; i < len; i++)
    {
        S[i] = st.top();
        st.pop();
    }
    return S;
}

// Delete middle element from stack
#include <bits/stdc++.h>
void solve(stack<int> &inputStack, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}

// valid parenthesis
bool isValidParenthesis(string s)
{
    // Creating an empty stack
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        // If opening bracket, then push to stack
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        // If closing bracket then check the top then pop
        else
        {
            // Checking weather the stack is empty or not
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Insert an element at it's bottom in a given stack
#include <bits/stdc++.h>
void solve(stack<int> &myStack, int x)
{
    // base case
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    // save the top element of the stack
    int num = myStack.top();

    // pop the saved element
    myStack.pop();

    // Recursive call
    solve(myStack, x);

    // After the stack is empty push the saved elements after "x"
    myStack.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    solve(myStack, x);
    return myStack;
}

// Reverse stack using recursion
void insertAtBottom(stack<int> &myStack, int x)
{
    // base case
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();
    insertAtBottom(myStack, x);
    myStack.push(num);
}

void reverseStack(stack<int> &stack)
{

    // base case
    if (stack.empty())
    {
        return;
    }

    int x = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    insertAtBottom(stack, x);
}

// Sort a stack
#include <bits/stdc++.h>
void sortedInsert(stack<int> &stack, int num)
{
    // base case
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }

    // Storing the top element of stack
    int n = stack.top();
    stack.pop();

    // Recursive call
    sortedInsert(stack, num);
    stack.push(n);
}
void sortStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    // Storing the top element of stack
    int num = stack.top();
    stack.pop();

    // Recursive call
    sortStack(stack);

    // Function to sortedly insert element into the stack
    sortedInsert(stack, num);
}

// RedundantBrackets
#include <bits/stdc++.h>
bool findRedundantBrackets(string &s)
{
    // creating an empty stack
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        // case - 1: if found any of these then push it to the empty stack
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(s[i]);
        }
        else
        {
            // case - 2: if not found the "ch" must be ')'
            if (ch == ')')
            {
                // for checking if the bracket is redundant or not
                bool isRedundant = true;

                // find till you get a opening brace
                while (st.top() != '(')
                {
                    // check is there any operator in between the brackets
                    char top = st.top();
                    if (top == '(' || top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }

                    // now pop the elements untill you get opening brace
                    st.pop();
                }

                // check the redundant conditon & return
                if (isRedundant == true)
                {
                    return true;
                }

                // pop the opening brace
                st.pop();
            }
        }
    }
    return false;
}

// Minimum Cost To Make String Valid
#include <bits/stdc++.h>
int findMinimumCost(string str)
{

    // odd case
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {

            // ch is closed brace
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }

    // stack contains invalid expression
    int a = 0, b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

//Next Smaller Element
#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

//Largest Rectangular area in Histogram
