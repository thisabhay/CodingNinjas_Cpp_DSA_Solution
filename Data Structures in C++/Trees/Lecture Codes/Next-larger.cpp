// Next larger
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    // int nextLarger=INT_MAX;
    TreeNode<int>* nextLargerNode=NULL;
    if(root->data>x){
        nextLargerNode=root;
    }
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* smallOutput=getNextLargerElement(root->children[i],x);
        if(smallOutput !=NULL && smallOutput->data>x && (nextLargerNode==NULL || nextLargerNode->data>smallOutput->data)){
            nextLargerNode=smallOutput;
        }
    }
    return nextLargerNode;
}