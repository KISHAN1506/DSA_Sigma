#include <iostream>
#include <vector>
using namespace std;

struct Node{
public:
    int val;
    Node *right;
    Node *left;

    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};

Node *LCA(Node *root, int n1, int n2){
    if (root == NULL){
        return NULL;
    }

    if (root->val == n1 || root->val == n2){
        return root;
    }

    Node *leftLCA = LCA(root->left, n1, n2);
    Node *rightLCA = LCA(root->right, n1, n2);

    if (leftLCA != NULL && rightLCA != NULL){
        return root;
    }

    return leftLCA == NULL ? rightLCA : leftLCA;
}

int dist(Node* root,int n){
    if(root == NULL){
        return -1;
    }

    if(root->val == n){
        return 0;
    }

    int leftDist = dist(root->left,n);
    if(leftDist != -1){
        return leftDist+1;
    }

    int rightDist = dist(root->right,n);
    if(rightDist != -1){
        return rightDist+1;
    }
    
    return -1;
}

int minDist(Node* root,int n1,int n2){
    Node* lca = LCA(root,n1,n2);
    
    int dist1 = dist(lca,n1);
    int dist2 = dist(lca,n2);

    return dist1+dist2;

}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << minDist(root, 4,6)<<endl;
    return 0;
}