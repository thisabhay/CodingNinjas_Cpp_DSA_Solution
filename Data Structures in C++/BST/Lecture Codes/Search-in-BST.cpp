// Code: Search in BST
bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    if(root->data>k){
        return searchInBST(root->left,k);
    }
    else{
        return searchInBST(root->right,k);
    }
}