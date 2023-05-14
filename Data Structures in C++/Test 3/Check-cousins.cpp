// Check cousins
bool areSiblings(BinaryTreeNode<int>* root,int p, int q){
    if(root==NULL){
        return false;
    }
    if(root->left && root->right){
    if((root->left->data==p && root->right->data==q) || (root->left->data==q && root->right->data==p)){
        return true;
    }
    }
    return areSiblings(root->left,p,q) || areSiblings(root->right,p,q);
}
int getLevel(BinaryTreeNode<int>* root,int x){
    if(root==NULL){
        return -1;
    }
    if(root->data==x){
        return 0;
    }
    int leftOutput=getLevel(root->left,x);
    int rightOutput=getLevel(root->right,x);
    if(leftOutput!=-1){
        return 1+leftOutput;
    }
    else if(rightOutput!=-1){
        return 1+rightOutput;
    }
    else{
        return -1;
    }
    
}
bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    // Write your code here
    if(getLevel(root,p)==getLevel(root,q) && !(areSiblings(root,p,q))){
        return true;
    }
    else{
        return false;
    }

}