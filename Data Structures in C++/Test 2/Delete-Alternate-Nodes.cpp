// Delete Alternate Nodes
Node* helper(Node *head){
    if(head==NULL || head->next==NULL){
        // cout<<"reached"<<endl;
        return head;
    }
    if(head->next->next==NULL){
        // delete head->next;
        head->next=NULL;
        return head;
    }
    Node *nextNode=helper(head->next->next);
    Node *nextNode1=head->next;
    // delete nextNode1;
    head->next=nextNode;
    return head;
}
void deleteAlternateNodes(Node *head) {
    //Write your code here
    helper(head);
    
}