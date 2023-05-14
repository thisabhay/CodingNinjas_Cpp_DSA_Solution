// Swap two Nodes of LL
Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    if(head==NULL){
        return head;
    }
    if(i==j){
        return head;
    }
    int count=0;
    // int count2=0;
    Node *prev1=NULL;
    Node *prev2=NULL;
    Node *temp=head;
    while(temp!=NULL){
        if(count==i-1){
            prev1=temp;
        }
        if(count==j-1){
            prev2=temp;
        }
        temp=temp->next;
        count++;
    }
    // if(prev1==NULL || prev2==NULL){
    //     return head;
    // }
    if(i==0){
    // cout<<"i==0"<<endl;
    Node* curr1=head;
    Node* curr2=prev2->next;
    if(curr1==NULL || curr2==NULL){
        return head;
    }
    
    
    Node* next1=curr1->next;
    Node* next2=curr2->next;
    // prev1->next=curr2;
    if(j==1){
        // cout<<"prev1 "<<prev1<<", curr1 "<<curr1<<", prev2 "<<prev2<<", curr2 "<<curr2<<endl;
        curr2->next=curr1;
        curr1->next=next2;
        return curr2;
    }
    curr2->next=next1;
    prev2->next=curr1;
    curr1->next=next2;
    return curr2;
    }
    else if(j==0){
        
    Node* curr2=head;
    Node* curr1=prev1->next;
    if(curr1==NULL || curr2==NULL){
        return head;
    }
    
    
    Node* next1=curr1->next;
    Node* next2=curr2->next;
    if(i==1){
        curr1->next=curr2;
        curr2->next=next1;
        return curr1;
    }
    prev1->next=curr2;
    curr2->next=next1;
    // prev2->next=curr1;
    curr1->next=next2;
    return curr1;
    
    }
    Node* curr1=prev1->next;
    Node* curr2=prev2->next;
    if(curr1==NULL || curr2==NULL){
        return head;
    }
    
    
    Node* next1=curr1->next;
    Node* next2=curr2->next;
    if(i==j+1 || j==i+1){
        prev1->next=curr2;
        curr2->next=curr1;
        curr1->next=next2;
        return head;
    }
    prev1->next=curr2;
    curr2->next=next1;
    prev2->next=curr1;
    curr1->next=next2;
    return head;
}