// Eliminate duplicates from LL
Node *removeDuplicates(Node *head)
{
    //Write your code here
    if(head==NULL){
        return head;
    }
    Node* temp=head;
    while(temp!=NULL){
        Node *temp2=temp->next;
        while(temp2!=NULL && temp2->data==temp->data){
            temp2=temp2->next;
        }
        
        temp->next=temp2;
        temp=temp2;
    }
    return head;
}