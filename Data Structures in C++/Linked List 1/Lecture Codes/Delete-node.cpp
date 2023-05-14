// Delete node
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    if(head==NULL){
        return head;
    }
    Node *temp=head;
    int count=0;
    if(pos==0){
        Node *nextNode=head->next;
        delete head;
        head=nextNode;
        }
    while(temp->next!=NULL){
        if(count==pos-1){
            Node *nextNode=temp->next;
            Node *nextNode2=temp->next->next;
            delete nextNode;
            temp->next=nextNode2;
            break;
        }
        count++;
        temp=temp->next;
    }
    return head;
}
