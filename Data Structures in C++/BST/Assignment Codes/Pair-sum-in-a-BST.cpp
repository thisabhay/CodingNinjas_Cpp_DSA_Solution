// Pair sum in a BST
#include<bits/stdc++.h>
void helper(BinaryTreeNode<int> *root, vector<int>* nodes){
    if(root==NULL){
        return;
    }
    helper(root->left,nodes);
    nodes->push_back(root->data);
    
    helper(root->right,nodes);
    
}
void printNodesSumToS(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
    vector<int>* nodes=new vector<int>();
    helper(root,nodes);
    int nodeCount=nodes->size();
    int nodeArr[nodeCount];
    for(int i=0;i<nodeCount;i++){
        nodeArr[i]=(*nodes)[i];
    }
    // sort(nodeArr,nodeArr+nodeCount);
    int i=0;
    int j=nodeCount-1;
    while(i<j){
        if(nodeArr[i]+nodeArr[j]==sum){
            cout<<nodeArr[i]<<" "<<nodeArr[j]<<endl;
            i++;
            j--;
        }
        else if(nodeArr[i]+nodeArr[j]>sum){
            j--;
        }
        else{
            i++;
        }
    }
    
}