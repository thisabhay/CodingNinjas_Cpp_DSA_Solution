// Print Level Wise
void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return ;
    }
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()>0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        // cout<<front->children.size()<<endl;
        if(front->children.size()==0){
            cout<<endl;
            continue;
        }
        for(int i=0;i<front->children.size()-1;i++){
            cout<<front->children[i]->data<<",";
            pendingNodes.push(front->children[i]);
        }
        if(front->children.size()>0){
            cout<<front->children[front->children.size()-1]->data;
            pendingNodes.push(front->children[front->children.size()-1]);
        }
        cout<<endl;
        // cout<<"size : "<<front->children.size()<<endl;
    }
    
}