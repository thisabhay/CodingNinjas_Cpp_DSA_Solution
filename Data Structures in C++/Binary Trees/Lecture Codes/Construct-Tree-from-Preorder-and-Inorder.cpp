// Code: Construct Tree from Preorder and Inorder
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
    if(preLength==0){
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(preorder[0]);
    int rootInOrderIndex;
    for(int i=0;i<inLength;i++){
        if(preorder[0]==inorder[i]){
            rootInOrderIndex=i;
        }
    }
    int inLeftEnd=rootInOrderIndex-1;
    int preLeftEnd=inLeftEnd+1;
    root->left=buildTree(preorder+1,inLeftEnd+1,inorder,inLeftEnd+1);
    int inRightStart=rootInOrderIndex+1;
    int preRightStart=preLeftEnd+1;
    root->right=buildTree(preorder+preRightStart,preLength-preRightStart,inorder+inRightStart,inLength-inRightStart);
    return root;
}