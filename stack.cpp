#include<iostream>
#include<stack>
using namespace std;
class stack {

    //properties
    int *arr;
    int top;
    int size;

    //behaviour
    stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push (int element) {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(int element) {
        if (top >= 1)
        {
            top--;
        }
        else {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(int element) {
        if (top >= 0)
        {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(int element) {
        if (top == -1)
        {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    stack<int> s;
    s.push(5);
    s.push(9);
    s.pop();
    cout << "Printing top element " << s.top() << endl;
    if (s.empty())
    {
        cout << "Stack is empty.";
    } else {
        cout << "Stack is not empty.";
    }
    
    return 0;
}