// Next Number
int helper(Node *head){
    if(head->next==NULL){
        
        int carry=0;
        // Pair *p=new Pair;
        head->data=head->data+1;
        if(head->data>=10){
            carry=head->data/10;
            head->data=head->data%10;
        }
        return carry;
        
    }
    int carry=helper(head->next);
    head->data=head->data+carry;
    if(head->data>=10){
            carry=head->data/10;
            head->data=head->data%10;
    }
    else{
        carry=0;
    }
    return carry;
}
Node* NextLargeNumber(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(head==NULL){
        return head;
    }
    int carry =helper(head->next);
    head->data=head->data+carry;
    if(head->data>=10){
            carry=head->data/10;
            head->data=head->data%10;
        Node *newHead=new Node(carry);
        newHead->next=head;
        return newHead;
    }
    return head;
    
    
}


