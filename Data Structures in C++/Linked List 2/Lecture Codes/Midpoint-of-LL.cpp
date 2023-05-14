// Code: Midpoint of LL
Node *midPoint(Node *head)
{
    // Write your code here
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        // if(fast!=NULL){
        // slow=slow->next;
        // }
        slow=slow->next;
    }
    return slow;
}