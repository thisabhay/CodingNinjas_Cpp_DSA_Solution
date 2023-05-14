// Code : Find a node
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    return isNodePresent(root->left,x) || isNodePresent(root->right,x);
}