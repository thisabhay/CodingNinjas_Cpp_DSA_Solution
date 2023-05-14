// Code: BST to Sorted LL
class Pair{
    public:
    Node<int>* head;
    Node<int>* tail;
    Pair(){
        head=NULL;
        tail=NULL;
    }
};
Pair helper(BinaryTreeNode<int>* root){
    if(root==NULL){
        Pair p;
        return p;
    }
    Node<int>* newNode=new Node<int>(root->data);
    Pair ans;
    if(root->left==NULL && root->right==NULL){
        ans.head=newNode;
        ans.tail=newNode;
        return ans;
    }
    if(root->left==NULL){
        ans.head=newNode;
        Pair rightOutput=helper(root->right);
        newNode->next=rightOutput.head;
        ans.tail=rightOutput.tail;
        return ans;
    }
    if(root->right==NULL){
        ans.tail=newNode;
        Pair leftOutput=helper(root->left);
        leftOutput.tail->next=newNode;
        ans.head=leftOutput.head;
        return ans;
    }
    Pair leftOutput=helper(root->left);
    Pair rightOutput=helper(root->right);
    leftOutput.tail->next=newNode;
    newNode->next=rightOutput.head;
    ans.head=leftOutput.head;
    ans.tail=rightOutput.tail;
    return ans;
}
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	// Write your code here
    Pair ans=helper(root);
    return ans.head;
}