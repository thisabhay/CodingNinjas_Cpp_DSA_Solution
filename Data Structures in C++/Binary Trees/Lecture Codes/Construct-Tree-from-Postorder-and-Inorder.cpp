// Construct Tree from Postorder and Inorder
BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
    if(postLength==0){
        return NULL;
    }
    int rootData=postorder[postLength-1];
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    int inRootStart;
    for(int i=0;i<inLength;i++){
        if(inorder[i]==rootData){
            inRootStart=i;
        }
    }
    int inLeftEnd=inRootStart-1;
    int postLeftEnd=inLeftEnd;
    root->left=buildTree(postorder,inLeftEnd+1,inorder,postLeftEnd+1);
    int inRightStart=inLeftEnd+2;
    int rightLength=inLength-inRightStart;
    int postRightStart=postLeftEnd+1;
    root->right=buildTree(postorder+postRightStart,rightLength,inorder+inRightStart,rightLength);
    return root;
}