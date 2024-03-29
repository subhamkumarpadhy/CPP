// Function to reverse the queue.
class Solution
{
public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;

        while (!q.empty())
        {
            int element = q.front();
            q.pop();
            s.push(element);
        }

        while (!s.empty())
        {
            int element = s.top();
            s.pop();
            q.push(element);
        }

        return q;
    }
};

// First negative integer in window of size k with the help of queue
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    deque<long long int> dq;
    vector<long long> ans;

    // process first window of k size
    for (int i = 0; i < K; i++)
    {
        if (A[i] < 0)
        {
            dq.push_back(i);
        }
    }

    // store answer of first k sized window
    if (dq.size() > 0)
    {
        ans.push_back(A[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }

    // process for remaining windows
    for (int i = K; i < N; i++)
    {
        // remove
        if (!dq.empty() && (i - dq.front()) >= K)
        {
            dq.pop_front();
        }

        // addition
        if (A[i] < 0)
        {
            dq.push_back(i);
        }

        // ans store
        if (dq.size() > 0)
        {
            ans.push_back(A[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }
    return ans;
}

// Reverse First K elements of Queue
class Solution
{
public:
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k)
    {
        stack<int> s;

        for (int i = 0; i < k; i++)
        {
            int val = q.front();
            q.pop();
            s.push(val);
        }

        while (!s.empty())
        {
            int val = s.top();
            s.pop();
            q.push(val);
        }

        int t = q.size() - k;
        while (t--)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};

// First non-repeating character in a stream
class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        unordered_map<char, int> count;
        queue<int> q;
        string ans = "";

        for (int i = 0; i < A.length(); i++)
        {
            char ch = A[i];
            // increase count
            count[ch]++;
            // queue me push karo
            q.push(ch);

            while (!q.empty())
            {
                if (count[q.front()] > 1)
                {
                    // repeating character
                    q.pop();
                }
                else
                {
                    // non-repeating character milgaya
                    ans.push_back(q.front());
                    break;
                }
            }

            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};

// Circular Tour
struct petrolPump
{
    int petrol;
    int distance;
};
class Solution
{
public:
    // Function to find starting point where the truck can start to get through
    // the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[], int n)
    {
        int deficit = 0;
        int balance = 0;
        int start = 0;

        for (int i = 0; i < n; i++)
        {
            balance += p[i].petrol - p[i].distance;
            if (balance < 0)
            {
                deficit += balance;
                start = i + 1;
                balance = 0;
            }
        }

        if (deficit + balance >= 0)
        {
            return start;
        }
        else
        {
            return -1;
        }
    }
};

// K queue in a single array
#include <iostream>
using namespace std;

class kQueue
{
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;

public:
    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        arr = new int[n];
        freeSpot = 0;
    }

    void enqueue(int data, int qn)
    {

        // overflow
        if (freeSpot == -1)
        {
            cout << "No Empty space is present" << endl;
            return;
        }

        // find first free index
        int index = freeSpot;
        // update freespot
        freeSpot = next[index];

        // check whther first element
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new element to the prev element
            next[rear[qn - 1]] = index;
        }

        // update next
        next[index] = -1;
        // update rear
        rear[qn - 1] = index;
        // push element
        arr[index] = data;
    }

    int dequeue(int qn)
    {
        // underflow
        if (front[qn - 1] == -1)
        {
            cout << "Queue UnderFlow " << endl;
            return -1;
        }

        // find index to pop
        int index = front[qn - 1];

        // front ko aage badhao
        front[qn - 1] = next[index];

        // freeSlots ko manage karo
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];
    }
};

int main()
{

    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    return 0;
}

//Sum of minimum and maximum elements of all subarrays of size k
#include <iostream>
#include <queue>
using namespace std;
int solve(int *arr, int n, int k)
{

    deque<int> maxi(k);
    deque<int> mini(k);

    // Addition of first k size window
    for (int i = 0; i < k; i++)
    {
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();
        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];

    // remaining windows ko process karlo
    for (int i = k; i < n; i++)
    {
        // next window
        // removal
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

        // addition
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();
        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }
    return ans;
}

int main()
{

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl;

    return 0;
}
