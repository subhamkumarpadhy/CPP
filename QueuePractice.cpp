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