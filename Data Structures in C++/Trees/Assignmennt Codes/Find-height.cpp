// Code : Find height
int getHeight(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    int maxHeight=0;
    for(int i=0;i<root->children.size();i++){
        int childMax=getHeight(root->children[i]);
        if(childMax>maxHeight){
            maxHeight=childMax;
        }
    }
    return maxHeight + 1;
    
}