#include <iostream>
#include <vector>
using namespace std;

struct Node
{
public:
    int val;
    Node *right;
    Node *left;

    Node(int val)
    {
        this->val = val;
        left = right = nullptr;
    }
};

Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->val == n1 || root->val == n2)
    {
        return root;
    }

    Node *leftLCA = LCA(root->left, n1, n2);
    Node *rightLCA = LCA(root->right, n1, n2);

    if (leftLCA != NULL && rightLCA != NULL)
    {
        return root;
    }

    return leftLCA == NULL ? rightLCA : leftLCA;
}

int main()
{
    // Tree creation
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << LCA(root, 5, 4)->val;

    return 0;
}