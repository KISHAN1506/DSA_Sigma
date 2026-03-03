#include <iostream>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};

class Info{
public:
    bool isBST;
    int min;
    int max;
    int size;

    Info(bool isBST,int min,int max,int size){
        this->isBST = isBST;
        this->min = min;
        this->max = max;
        this->size = size;
    }
};


static int maxSize = 0;

    Info* largestBST(Node* root){
        // BC 1
        if(root == NULL){
            return new Info(true,INT_MAX,INT_MIN,0);
        }

        // BC 2
        // if(root == NULL) return NULL;
        // if(root->left == NULL && root->right == NULL){
        //     return new Info(true,root->val,root->val,1);
        // }

        Info* leftInfo = largestBST(root->left);
        Info* rightInfo = largestBST(root->right);

        int currMin = min(root->val,min(leftInfo->min,rightInfo->min));
        int currMax = max(root->val,max(leftInfo->max,rightInfo->max));
        int currSize = leftInfo->size + rightInfo->size + 1;


        if(leftInfo->isBST && rightInfo->isBST
            && root->val > leftInfo->max && root->val < rightInfo->min){
                maxSize = max(maxSize,currSize);
                return new Info(true,currMin,currMax,currSize);
            }
        
        return new Info(false,currMin,currMax,currSize);
    }

int main(){
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(60);
    root->left->left = new Node(5);
    root->left->right = new Node(20);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right = new Node(80);

    largestBST(root);
    cout<<maxSize<<endl;




    return 0;
}