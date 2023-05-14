// Code : Reverse LL (Recursive)
Node* reverseLinkedListRec(Node *head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* tail=head->next;
    Node* smallOutput=reverseLinkedListRec(head->next);
    tail->next=head;
    head->next=NULL;
    return smallOutput;
    
}
