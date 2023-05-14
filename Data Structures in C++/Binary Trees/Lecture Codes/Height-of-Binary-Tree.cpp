// Code : Height of Binary Tree
int height(BinaryTreeNode<int>* root) {
    // Write our code here
    if(root==NULL){
        return 0;
    }
    return 1+ max(height(root->left),height(root->right));
}