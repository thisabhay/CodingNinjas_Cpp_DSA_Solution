// kReverse
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

Node *kReverse(Node *head, int k)
{
	//Write your code here
    if(head==NULL){
        return head;
    }
    if(k<=1){
        return head;
    }
    // int count=0;
    Node* temp=head;
    for(int i=0;i<k-1;i++){
        if(temp==NULL){
            break;
        }
        temp=temp->next;
    }
    if(temp==NULL || temp->next==NULL){
        return reverseLinkedListRec(head);
    }
    Node* head2=temp->next;
    temp->next=NULL;
    Node* newHead=reverseLinkedListRec(head);
    temp=newHead;
    Node* newHead2=kReverse(head2,k);
    
    head->next=newHead2;
    return newHead;
}