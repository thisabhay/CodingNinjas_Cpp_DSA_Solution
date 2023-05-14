// Length of LL (recursive)
int length(Node *head) {
    // Write your code here
    if(head==NULL){
        return 0;
    }
    return 1+length(head->next);
}