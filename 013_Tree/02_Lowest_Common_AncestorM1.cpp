#include <iostream>
#include <vector>
using namespace std;

struct Node{
public:
    int val;
    Node* right;
    Node* left;

    Node(int val){
        this->val = val;
        left=right=nullptr;
    }
};


bool rootToNodePath(Node* root,int n,vector<int> &path){
    if(root == NULL){
        return false;
    }
    path.push_back(root->val);
    if(root->val == n){
        return true;
    }

    bool isLeft = rootToNodePath(root->left,n,path);
    bool isRight = rootToNodePath(root->right,n,path);

    if(isLeft || isRight){
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(Node* root,int n1,int n2){
    vector<int> path1;
    vector<int> path2;

    rootToNodePath(root,n1,path1);
    rootToNodePath(root,n2,path2);

    int lca = -1;
    for(int i = 0,j = 0;i<=path1.size()&&j<path2.size();i++,j++){
        if(path1[i] != path2[j]){
            return lca;
        }
        lca = path1[i];
    }
    return lca;
}

int main(){
    // Tree creation
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);


    cout<<LCA(root,5,4);

    return 0;
}