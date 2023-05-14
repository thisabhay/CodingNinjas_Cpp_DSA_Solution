// Check if a Binary Tree is BST
#include<climits>
#include<bits/stdc++.h>
bool isBST3(BinaryTreeNode<int> *root,int min=INT_MIN,int max=INT_MAX) {
    if(root==NULL){
        return true;
    }
    if(root->data<min || root->data>max){
        return false;
    }
    return isBST3(root->left,min,root->data) && isBST3(root->right,root->data,max);
}
bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return true;
    }
    return isBST3(root);
}