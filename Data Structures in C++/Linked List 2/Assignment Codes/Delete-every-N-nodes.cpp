// Delete every N nodes
Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head==NULL){
        return head;
    }
    if(M==0){
        return NULL;
    }
    Node* temp=head;
    while(temp!=NULL){
        int mCount=0;
        while(mCount<M-1 && temp!=NULL){
            temp=temp->next;
            mCount++;
        }
        if(temp==NULL){
            return head;
        }
        Node *nEnd=temp;
        int nCount=0;
        while(nCount<=N && temp!=NULL){
            temp=temp->next;
            nCount++;
        }
        Node* newEndStart=temp;
        nEnd->next=newEndStart;
        
        
    }
    return head;
}