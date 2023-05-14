// Print ith node
void printIthNode(Node *head, int i)
{
    //Write your code here
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        if(count==i){
            cout<<temp->data<<endl;
        }
        count++;
        temp=temp->next;
    }
}