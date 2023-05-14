// Print nodes at distance k from node
void printNodeAtDistanceK(BinaryTreeNode<int>*root,int k){
    if(root==NULL){
        return;
    }
    if(k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    printNodeAtDistanceK(root->left,k-1);
    printNodeAtDistanceK(root->right,k-1);
}
int print(BinaryTreeNode<int>* root,int node,int k){
    if(root==NULL){
        return -1;
    }
    if(root->data==node){
        printNodeAtDistanceK(root,k);
        return 0;
    }
    int leftDistance=print(root->left,node,k);
    if(leftDistance!=-1){
        if(leftDistance+1==k){
            cout<<root->data<<endl;
            return leftDistance+1;
        }
        else{
            printNodeAtDistanceK(root->right,k-leftDistance-2);
            return leftDistance+1;
        }
    }
    int rightDistance=print(root->right,node,k);
    if(rightDistance!=-1){
        if(rightDistance+1==k){
            cout<<root->data<<endl;
            return rightDistance+1;
        }
        else{
            printNodeAtDistanceK(root->left,k-rightDistance-2);
            return rightDistance+1;
        }
    }
    return -1;
    
}
void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    // Write your code herez
    int ans=print(root,node,k);
}