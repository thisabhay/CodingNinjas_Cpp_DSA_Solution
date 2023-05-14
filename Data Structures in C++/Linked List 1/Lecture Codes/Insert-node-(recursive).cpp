// Insert node (recursive)
Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    if(head==NULL){
        return head;
    }
    if(i==0){
        Node *newNode=new Node(data);
        newNode->next=head;
        return newNode;
    }
    Node* newHead=insertNode(head->next,i-1,data);
    head->next=newHead;
    return head;
}