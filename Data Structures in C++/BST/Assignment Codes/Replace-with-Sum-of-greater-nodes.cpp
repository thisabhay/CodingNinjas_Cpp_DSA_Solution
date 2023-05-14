// Replace with Sum of greater nodes
int helper(BinaryTreeNode<int>* root,int sum){
    if(root==NULL){
        return 0;
    }
    int rightOutput=helper(root->right,sum);
    int temp=root->data;
    root->data=root->data+sum+rightOutput;
    int leftOutput=helper(root->left,root->data);
    return temp+leftOutput+rightOutput;
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    int ans=helper(root,0);
    return;
}