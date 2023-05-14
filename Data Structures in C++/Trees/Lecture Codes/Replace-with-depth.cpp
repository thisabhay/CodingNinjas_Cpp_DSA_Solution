// Replace with depth
void helper(TreeNode<int>* root,int depth){
    root->data=depth;
    for(int i=0;i<root->children.size();i++){
        helper(root->children[i],depth+1);
    }
}
void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    helper(root,0);
}