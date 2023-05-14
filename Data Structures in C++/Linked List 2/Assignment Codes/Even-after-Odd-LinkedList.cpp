// Even after Odd LinkedList
class Triplet{
    public:
    Node *oddStart;
    Node *oddEnd;
    Node *evenStart=NULL;
    Triplet(Node *oddStart, Node *oddEnd){
        this->oddStart=oddStart;
        this->oddEnd=oddEnd;
    }
};
Triplet* helper(Node *head){
    if(head==NULL){
        Triplet* t=new Triplet(NULL,NULL);
        return t;
    }
    if(head->data%2!=0){
        Node* newNode=new Node(head->data);
        Triplet* smallOutput=helper(head->next);
        newNode->next=smallOutput->oddStart;
        smallOutput->oddStart=newNode;
        if(smallOutput->oddEnd==NULL){
            smallOutput->oddEnd=newNode;
        }
        return smallOutput;
    }
    else{
        Node* newNode=new Node(head->data);
        Triplet* smallOutput=helper(head->next);
        newNode->next=smallOutput->evenStart;
        smallOutput->evenStart=newNode;
        if(smallOutput->oddEnd!=NULL){
            smallOutput->oddEnd->next=smallOutput->evenStart;
        }
        return smallOutput;
    }
}
Node *evenAfterOdd(Node *head)
{
	//write your code here
    Triplet* ans=helper(head);
    if(ans->oddStart==NULL){
        return ans->evenStart;
    }
    return ans->oddStart;
    
}