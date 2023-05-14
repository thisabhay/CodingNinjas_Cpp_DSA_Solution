// Nodes without sibling
void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right!=NULL){
        cout<<root->right->data<<" ";
    }
    if(root->right==NULL && root->left!=NULL){
        cout<<root->left->data<<" ";
    }
    printNodesWithoutSibling(root->left);
    printNodesWithoutSibling(root->right);
}