// Create & Insert Duplicate Node
void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    insertDuplicateNode(root->left);
    insertDuplicateNode(root->right);
    BinaryTreeNode<int> * newNode=new BinaryTreeNode<int>(root->data);
    BinaryTreeNode<int> * leftNode=root->left;
    root->left=newNode;
    newNode->left=leftNode;
}