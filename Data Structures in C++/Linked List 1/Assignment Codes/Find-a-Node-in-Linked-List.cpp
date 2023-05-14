// Find a Node in Linked List
int findNode(Node *head, int n){
    // Write your code here.
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data==n){
            return count;
        }
        temp=temp->next;
        count++;
    }
    return -1;
}