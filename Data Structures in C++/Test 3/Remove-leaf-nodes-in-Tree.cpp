// Remove leaf nodes in Tree
TreeNode<int>* removeLeafNodes(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return root;
    }
    // if(root->numChildren()==0){
    //     delete root;
    //     return NULL;
    // }
    int size=root->numChildren();
    for(int i=0;i<size;i++){
        if(root->getChild(i)->numChildren()==0){
            root->removeChild(i);
            i--;
            size--;
        }
        // TreeNode<int>* ans=removeLeafNodes(root->getChild(i));
        // root->setChild(i,ans);
    }
    if(root->numChildren()==0){
        return root;
    }
    for(int i=0;i<root->numChildren();i++){
        TreeNode<int>* ans=removeLeafNodes(root->getChild(i));
        root->setChild(i,ans);
    }
    return root;

}
