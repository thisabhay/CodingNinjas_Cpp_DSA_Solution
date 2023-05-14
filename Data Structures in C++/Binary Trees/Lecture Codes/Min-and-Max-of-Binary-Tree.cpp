// Min and Max of Binary Tree
#include<bits/stdc++.h>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        pair<int,int> p(INT_MAX,INT_MIN);
        return p;
    }
    pair<int,int> leftPair=getMinAndMax(root->left);
    pair<int,int> rightPair=getMinAndMax(root->right);
    pair<int,int> ans(min({root->data,leftPair.first,rightPair.first}),max({root->data,leftPair.second,rightPair.second}));
    // delete leftPair;
    // delete rightPair;
    return ans;
    
}