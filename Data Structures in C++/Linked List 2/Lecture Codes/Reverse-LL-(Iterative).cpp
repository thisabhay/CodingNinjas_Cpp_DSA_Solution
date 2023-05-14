// Code: Reverse LL (Iterative)
Node *reverseLinkedList(Node *head) {
    // Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *temp=head->next;
    Node *prev=head;
    while(temp->next!=NULL){
        Node* nextNode=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextNode;
    }
    temp->next=prev;
    head->next=NULL;
    return temp;
}