// AppendLastNToFirst
int lengthLL(Node *head) {
    // Write your code here
    if(head==NULL){
        return 0;
    }
    return 1+lengthLL(head->next);
}
Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if(head==NULL || n==0){
        return head;
    }
    int len=lengthLL(head);
    Node* temp=head;
    for(int i=0;i<len-n-1;i++){
        temp=temp->next;
    }
    Node* temp2=temp->next;
    temp->next=NULL;
    Node* newHead=temp2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=head;
    return newHead;
}