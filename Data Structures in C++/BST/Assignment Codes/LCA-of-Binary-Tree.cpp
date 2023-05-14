// LCA of Binary Tree
#include<climits>
int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    // Write your code here
    if(root==NULL){
        return -1;
    }
    if(root->data==a || root->data==b){
        return root->data;
    }
    int leftOutput=getLCA(root->left,a,b);
    int rightOutput=getLCA(root->right,a,b);
    if(leftOutput==-1 && rightOutput!=-1){
        return rightOutput;
    }
    else if(leftOutput!=-1 && rightOutput==-1){
        return leftOutput;
    }
    else if(leftOutput==-1 && rightOutput==-1){
        return -1;
    }
    else{
        return root->data;
    }
}