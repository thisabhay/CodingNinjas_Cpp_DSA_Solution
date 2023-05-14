// Length of LL
int length(Node *head)
{
    //Write your code here
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
