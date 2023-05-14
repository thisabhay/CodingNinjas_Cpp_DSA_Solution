// Largest BST
#include<climits>
class quadlet{
    public:
    int min;
    int max;
    bool isBST;
    int height;
    quadlet(){
        min=INT_MAX;
        max=INT_MIN;
        height=0;
    }
};
quadlet helper(BinaryTreeNode<int>* root){
    if(root==NULL){
        quadlet ans;
        ans.min=INT_MAX;
        ans.max=INT_MIN;
        ans.isBST=true;
        ans.height=0;
        return ans;
    }
    quadlet leftOutput=helper(root->left);
    quadlet rightOutput=helper(root->right);
    quadlet ans;
    ans.min=min(root->data,min(leftOutput.min,rightOutput.min));
    ans.max=max(root->data,max(leftOutput.max,rightOutput.max));
    
    if(leftOutput.isBST==false && rightOutput.isBST==false){
        ans.isBST=false;
        ans.height=max(leftOutput.height,rightOutput.height);
    }
    else if(leftOutput.isBST==false || rightOutput.isBST==false){
        ans.isBST=false;
        ans.height=max(leftOutput.height,rightOutput.height);
    }
    else{
        if(root->data>leftOutput.max && root->data<rightOutput.min){
            ans.isBST=true;
            ans.height=max(leftOutput.height,rightOutput.height)+1;
        }
        else{
            ans.isBST=false;
            ans.height=max(leftOutput.height,rightOutput.height);
        }
        
    }
    return ans;
    
}
int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    quadlet ans=helper(root);
    return ans.height;
}