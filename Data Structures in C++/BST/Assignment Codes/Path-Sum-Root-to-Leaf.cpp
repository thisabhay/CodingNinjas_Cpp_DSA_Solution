// Path Sum Root to Leaf
#include<bits/stdc++.h>
void helper(BinaryTreeNode<int>* root,int k,string output){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        if(root->data==k){
            output=output+to_string(root->data);
            cout<<output<<endl;
        }
        return;
    }
    output=output+to_string(root->data)+ " ";
    helper(root->left,k-root->data,output);
    helper(root->right,k-root->data,output);
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    // Write your code here
    if(root==NULL){
        return;
    }
    
    // vector<vector<int>> ans;
    string ans="";
    helper(root,k,ans);
}