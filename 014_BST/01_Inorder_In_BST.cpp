#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};

int idx = -1;

Node* buildTree(int arr[]) {
    idx++;

    if(arr[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(arr[idx]);

    root->left = buildTree(arr);
    root->right = buildTree(arr);

    return root;
}

void inOrder(Node* root){
    if(root == NULL) return;
    
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
    cout<<endl;
}

int main(){
    int arr[] = {4,2,1,-1,-1,3,-1,-1,5,-1,6,-1,-1};
    Node* root = buildTree(arr);

    inOrder(root);
    return 0;
}