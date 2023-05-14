// Palindrome LinkedList
int lengthLL(Node *head) {
    // Write your code here
    if(head==NULL){
        return 0;
    }
    return 1+lengthLL(head->next);
}
bool isPalindrome2(Node *head,int len){
    if(head==NULL || len<=1){
        return true;
    }
    bool smallOutput=isPalindrome2(head->next,len-2);
    if(smallOutput==false){
        return false;
    }
    Node* temp=head;
    for(int count=0;count<len-1;count++){
        temp=temp->next;
    }
    if(temp->data==head->data){
        return true;
    }
    else{
        return false;
    }
}
bool isPalindrome(Node *head)
{
    //Write your code here
    int len=lengthLL(head);
    isPalindrome2(head,len);
    
}