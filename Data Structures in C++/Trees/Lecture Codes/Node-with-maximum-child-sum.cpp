// Node with maximum child sum
class Pair{
  public:
    TreeNode<int>* node;
    int sum;
    Pair(TreeNode<int>* t,int maxSum){
        node=t;
        sum=maxSum;
    }
};
Pair* helper(TreeNode<int>* root){
    int rootSum=root->data;
    for(int i=0;i<root->children.size();i++){
        rootSum=rootSum+root->children[i]->data;
    }
    Pair* p=new Pair(root,rootSum);
    for(int i=0;i<root->children.size();i++){
        Pair* childNodeMax=helper(root->children[i]);
        if(childNodeMax->sum>p->sum){
            delete p;
            p=childNodeMax;
        }
    }
    return p;
}
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return root;
    }
    Pair* ans=helper(root);
    return ans->node;
    
}