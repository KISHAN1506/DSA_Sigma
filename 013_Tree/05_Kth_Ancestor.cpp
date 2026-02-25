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

int KthAncestor(Node* root,int node,int k){
    if(root == NULL){
        return -1;
    }

    if(root->val == node){
        return 0;
    }

    int leftDist = KthAncestor(root->left,node,k);
    int rightDist = KthAncestor(root->right,node,k);

    if(leftDist == -1 && rightDist == -1){
        return -1;
    }

    int validValue = leftDist == -1?rightDist:leftDist;
    if(validValue + 1 == k){
        cout<<"Kth Ancestor : "<<root->val<<endl;
    }

    return validValue + 1;
}



int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    KthAncestor(root,6,1);

    return 0;
}