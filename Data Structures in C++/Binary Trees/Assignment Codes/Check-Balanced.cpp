// Check Balanced
class Pair{
    public:
    bool isBalance;
    int height;
    Pair(){
        isBalance=true;
        height=0;
    }
};
Pair helper(BinaryTreeNode<int>* root){
    if(root==NULL){
        Pair p;
        return p;
    }
    Pair leftPair=helper(root->left);
    Pair rightPair=helper(root->right);
    if(rightPair.isBalance==false || leftPair.isBalance==false){
        Pair ans;
        ans.isBalance=false;
        return ans;
    }
    Pair ans;
    if(leftPair.height!=rightPair.height){
        ans.isBalance=false;
        return ans;
    }
    ans.height=1+max(leftPair.height,rightPair.height);
    return ans;
}
bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return true;
    }
    Pair ans=helper(root);
    return ans.isBalance;
}