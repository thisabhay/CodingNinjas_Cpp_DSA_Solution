// Print Level Wise
void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        if(front->left==NULL){
            cout<<"L:-1,";
        }
        else{
            cout<<"L:"<<front->left->data<<",";
            pendingNodes.push(front->left);
        }
        if(front->right==NULL){
            cout<<"R:-1";
        }
        else{
            cout<<"R:"<<front->right->data;
            pendingNodes.push(front->right);
        }
        cout<<endl;
    }
}