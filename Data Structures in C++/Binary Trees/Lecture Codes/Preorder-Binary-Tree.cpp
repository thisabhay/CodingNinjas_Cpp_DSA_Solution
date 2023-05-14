// Preorder Binary Tree
void preOrder(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}