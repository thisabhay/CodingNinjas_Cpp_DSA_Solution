// Code : Mirror
void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    BinaryTreeNode<int>* leftChild=root->left;
    BinaryTreeNode<int>* rightChild=root->right;
    root->left=rightChild;
    root->right=leftChild;
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
}