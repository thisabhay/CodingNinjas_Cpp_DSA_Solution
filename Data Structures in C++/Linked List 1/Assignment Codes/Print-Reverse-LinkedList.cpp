// Print Reverse LinkedList
void printReverse(Node *head){
    if(head==NULL){
        return;
    }
    printReverse(head->next);
    cout<<head->data<<" ";
}