#include <iostream>
using namespace std;

struct TreeNode{
public:
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int val){
        this->val = val;
        left=right=nullptr;
    }
};

void kthHelper(TreeNode* root,int k,int currLevel){
    if(root == NULL) return;
    if(currLevel == k){
        cout<<root->val<<" ";
        return;
    }

    kthHelper(root->left,k,currLevel+1);
    kthHelper(root->right,k,currLevel+1);
}

void kthLevel(TreeNode* root,int k){ // O(1)
    kthHelper(root,k,1);
}

int main(){
    TreeNode* root = new TreeNode(1);
    // Tree creation
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->right = new TreeNode(6);

    kthLevel(root,2);
    


    return 0;
}