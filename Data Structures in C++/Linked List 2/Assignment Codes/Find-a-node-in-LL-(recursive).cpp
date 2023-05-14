// Find a node in LL (recursive)
int findNodeRec(Node *head, int n)
{
	//Write your code here
    if(head==NULL){
        return -1;
    }
    if(head->data==n){
        return 0;
    }
    int smallOutput=findNodeRec(head->next,n);
    if(smallOutput==-1){
        return -1;
    }
    else{
        return 1+smallOutput;
    }
}