// Level wise linkedlist
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
    vector<Node<int>*> heads;
    if(root==NULL){
        heads.push_back(NULL);
        return heads;
    }
    Node<int>* rootNode=new Node<int>(root->data);
    heads.push_back(rootNode);
    queue<BinaryTreeNode<int>*> pendingNodes;
    if(root->left!=NULL){
        pendingNodes.push(root->left);
    }
    if(root->right!=NULL){
        pendingNodes.push(root->right);
    }
    while(pendingNodes.size()!=0){
        int pendingNodesSize=pendingNodes.size();
        Node<int>* head=NULL;
        Node<int>* tail=NULL;
        for(int i=0;i<pendingNodesSize;i++){
            BinaryTreeNode<int>* front=pendingNodes.front();
            pendingNodes.pop();
            if(front->left!=NULL){
                pendingNodes.push(front->left);
            }
            if(front->right!=NULL){
                pendingNodes.push(front->right);
            }
            // cout<<front->data<<" ";
            Node<int>* newNode= new Node<int>(front->data);
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=tail->next;
            }
        }
        // cout<<endl;
        heads.push_back(head);
    }
    return heads;
}