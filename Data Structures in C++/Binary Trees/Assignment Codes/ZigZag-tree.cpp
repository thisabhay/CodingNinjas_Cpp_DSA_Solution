// ZigZag tree
#include<bits/stdc++.h>
void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    // queue<BinaryTreeNode<int>*> pendingQueue;
    stack<BinaryTreeNode<int>*>* pendingStack=new stack<BinaryTreeNode<int>*>();
    cout<<root->data<<endl;
    if(root->left!=NULL){
        pendingStack->push(root->left);
    }
    if(root->right!=NULL){
        pendingStack->push(root->right);
    }
    while(pendingStack->size()!=0){
        int stackSize=pendingStack->size();
        stack<BinaryTreeNode<int>*>* newStack=new stack<BinaryTreeNode<int>*>();
        for(int i=0;i<stackSize;i++){
            BinaryTreeNode<int>* front=pendingStack->top();
            pendingStack->pop();
            if(front->right!=NULL){
                newStack->push(front->right);
            }
            if(front->left!=NULL){
                newStack->push(front->left);
            }
            cout<<front->data<<" ";
        }
        delete pendingStack;
        pendingStack=newStack;
        cout<<endl;
        stackSize=pendingStack->size();
        newStack=new stack<BinaryTreeNode<int>*>();
        if(stackSize==0){
            break;
        }
        for(int i=0;i<stackSize;i++){
            BinaryTreeNode<int>* front=pendingStack->top();
            pendingStack->pop();
            if(front->left!=NULL){
                newStack->push(front->left);
            }
            if(front->right!=NULL){
                newStack->push(front->right);
            }
            
            cout<<front->data<<" ";
        }
        cout<<endl;
        delete pendingStack;
        pendingStack=newStack;
    }
    
}