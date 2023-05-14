// Code : Count leaf nodes
int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int sum=0;
    for(int i=0;i<root->children.size();i++){
        sum=sum+getLeafNodeCount(root->children[i]);
    }
    return sum;
}