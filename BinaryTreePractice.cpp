// Q. Finding the height of a given binary tree:-

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

// using levelOrderTraversal
class Solution
{
public:
    int levelOrderTraversal(Node *root, int &count)
    {
        if (root == NULL)
            return -1;
        queue<Node *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();

            if (temp == NULL)
            {
                count++;
                if (!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        return count;
    }
    int height(struct Node *node)
    {
        int count = 0;
        count = levelOrderTraversal(node, count);
        return count;
    }
};

// using recursion
class Solution
{
public:
    int height(struct Node *root)
    {
        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        return 1 + max(left, right);
    }
};



// Q. Diameter of a binary tree

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution
{
public:
    pair<int, int> diameterFast(Node *root)
    {
        // base case
        if (root == NULL)
        {
            pair<int, int> p = make_pair(0, 0);
            return p;
        }

        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;

        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }
    int diameter(Node *root)
    {
        return diameterFast(root).first;
    }
};



// Q. check for balanced tree

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
public:
    pair<bool, int> isBalancedFast(Node *root)
    {
        // base case
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<int, int> left = isBalancedFast(root->left);
        pair<int, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if (leftAns && rightAns && diff)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
};