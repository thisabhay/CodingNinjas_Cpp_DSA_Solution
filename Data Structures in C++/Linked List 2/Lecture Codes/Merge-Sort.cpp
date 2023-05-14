// Code: Merge Sort
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
            Node *nextNode=temp2->next;
            delete temp2;
            temp2=nextNode;
            
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
            Node *nextNode=temp1->next;
            delete temp1;
            temp1=nextNode;
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
            Node *nextNode=temp2->next;
            delete temp2;
            temp2=nextNode;
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
            Node *nextNode=temp1->next;
            delete temp1;
            temp1=nextNode;
        }
    }
    return newHead;
}
Node *mergeSort(Node *head)
{
	//Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* midNode=midPoint(head);
    Node* nextNode=midNode->next;
    midNode->next=NULL;
    Node* head1=mergeSort(head);
    Node* head2=mergeSort(nextNode);
    Node* newHead=mergeTwoSortedLinkedLists(head1,head2);
    return newHead;
    
}