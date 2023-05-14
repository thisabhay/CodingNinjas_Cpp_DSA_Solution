// Code : Max data node
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return root;
    }
    TreeNode<int>* maxNode=root;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* childMax=maxDataNode(root->children[i]);
        if(childMax->data>maxNode->data){
            maxNode=childMax;
        }
    }
    return maxNode;
}