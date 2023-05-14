// Code: Merge Two Sorted LL
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node *temp1=head1;
    Node *temp2=head2;
    Node *newHead=NULL;
    Node *newTail=NULL;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data > temp2->data){
            Node* newNode=new Node(temp2->data);
            if(newHead==NULL){
                newHead=newNode;
                newTail=newNode;
            }
            else{
                newTail->next=newNode;
                newTail=newNode;
            }
            temp2=temp2->next;
        }
        else{
            Node* newNode=new Node(temp1->data);
            if(newHead==NULL){
                newHead=newNode;
                newTail=newNode;
            }
            else{
                newTail->next=newNode;
                newTail=newNode;
            }
            temp1=temp1->next;
        }
    }
    if(temp1==NULL){
        while(temp2!=NULL){
        Node* newNode=new Node(temp2->data);
            if(newHead==NULL){
                newHead=newNode;
                newTail=newNode;
            }
            else{
                newTail->next=newNode;
                newTail=newNode;
            }
            temp2=temp2->next;
        }
    }
    else{
        while(temp1!=NULL){
        Node* newNode=new Node(temp1->data);
            if(newHead==NULL){
                newHead=newNode;
                newTail=newNode;
            }
            else{
                newTail->next=newNode;
                newTail=newNode;
            }
            temp1=temp1->next;
        }
    }
    return newHead;
}