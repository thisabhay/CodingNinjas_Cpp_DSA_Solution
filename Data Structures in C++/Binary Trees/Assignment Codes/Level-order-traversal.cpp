// Level order traversal
void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    queue<BinaryTreeNode<int>*> pendingNodes;
    if(root->left!=NULL){
        pendingNodes.push(root->left);
    }
    if(root->right!=NULL){
        pendingNodes.push(root->right);
    }
    while(pendingNodes.size()!=0){
        int pendingNodesSize=pendingNodes.size();
        for(int i=0;i<pendingNodesSize;i++){
            BinaryTreeNode<int>* front=pendingNodes.front();
            pendingNodes.pop();
            if(front->left!=NULL){
                pendingNodes.push(front->left);
            }
            if(front->right!=NULL){
                pendingNodes.push(front->right);
            }
            cout<<front->data<<" ";
        }
        cout<<endl;
    }
}