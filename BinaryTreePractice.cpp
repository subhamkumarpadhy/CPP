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

// Q. Determine if Two Trees are Identical

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
    bool isIdentical(Node *r1, Node *r2)
    {
        // base cases
        if (r1 == NULL && r2 == NULL)
        {
            return true;
        }
        if (r1 == NULL && r2 != NULL)
        {
            return false;
        }
        if (r1 != NULL && r2 == NULL)
        {
            return false;
        }

        bool left = isIdentical(r1->left, r2->left);
        bool right = isIdentical(r1->right, r2->right);

        bool value = r1->data == r2->data;

        if (left && right && value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// Q.Sum Tree

/*
struct Node
{
    int data;
    Node* left, * right;
};
*/

class Solution
{
public:
    pair<bool, int> isSumTreeFast(Node *root)
    {
        // base case
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        if (root->left == NULL && root->right == NULL)
        {
            pair<bool, int> p = make_pair(true, root->data);
            return p;
        }

        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);

        bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;

        int leftSum = leftAns.second;
        int rightSum = rightAns.second;

        bool condn = root->data == leftSum + rightSum;

        pair<bool, int> ans;

        if (isLeftSumTree && isRightSumTree && condn)
        {
            ans.first = true;
            ans.second = root->data + leftSum + rightSum;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isSumTree(Node *root)
    {
        return isSumTreeFast(root).first;
    }
};

// Q. ZigZag Tree Traversal
/*
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node *root)
    {
        vector<int> result;
        if (root == NULL)
        {
            return result;
        }

        queue<Node *> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty())
        {

            int size = q.size();
            vector<int> ans(size);

            // level process
            for (int i = 0; i < size; i++)
            {

                Node *frontNode = q.front();
                q.pop();

                // normal insert or reverse insert
                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode->data;

                if (frontNode->left)
                {
                    q.push(frontNode->left);
                }

                if (frontNode->right)
                {
                    q.push(frontNode->right);
                }
            }

            // direction change karna heee
            leftToRight = !leftToRight;

            for (auto i : ans)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};

// Q. Boundary Traversal of binary tree

/*
struct Node
{
    int data;
    Node* left, * right;
};
*/

class Solution
{
public:
    void traverseLeft(Node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return;
        ans.push_back(root->data);
        if (root->left)
            traverseLeft(root->left, ans);
        else
            traverseLeft(root->right, ans);
    }
    void traverseLeaf(Node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
            return;
        }
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    void traverseRight(Node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return;
        if (root->right)
            traverseRight(root->right, ans);
        else
            traverseRight(root->left, ans);
        // wapas aagaye
        ans.push_back(root->data);
    }
    vector<int> boundary(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }

        ans.push_back(root->data);

        // left part print karo
        traverseLeft(root->left, ans);

        // traverse leaf nodes

        // left subtree
        traverseLeaf(root->left, ans);
        // right subtree
        traverseLeaf(root->right, ans);

        // traverse right part
        traverseRight(root->right, ans);

        return ans;
    }
};