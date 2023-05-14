// Second Largest Element In Tree
class NodePair{
  public:
    TreeNode<int>* largest;
    TreeNode<int>* secondLargest;
    NodePair(TreeNode<int>* largest,TreeNode<int>* secondLargest){
        this->largest=largest;
        this->secondLargest=secondLargest;
    }
};
NodePair* helper(TreeNode<int>* root){
    NodePair* p=new NodePair(root,NULL);
    for(int i=0;i<root->children.size();i++){
        NodePair* smallOutput=helper(root->children[i]);
        if(smallOutput->largest->data>p->largest->data){
           TreeNode<int>* storage=p->largest;
           p->largest=smallOutput->largest;
           p->secondLargest=storage; 
        }
        if((p->secondLargest==NULL || smallOutput->largest->data>p->secondLargest->data) && smallOutput->largest->data<p->largest->data){
            p->secondLargest=smallOutput->largest;
        }
        if(p->secondLargest==NULL || (smallOutput->secondLargest != NULL && p->secondLargest->data<smallOutput->secondLargest->data)){
            p->secondLargest=smallOutput->secondLargest;
        }
        
        delete smallOutput;
    }
    return p;
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return root;
    }
    NodePair* ans=helper(root);
    return ans->secondLargest;
}