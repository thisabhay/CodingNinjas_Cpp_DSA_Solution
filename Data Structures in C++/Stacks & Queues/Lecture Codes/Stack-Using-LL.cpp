// Code : Stack Using LL
class Stack {
	// Define the data members
    Node *head;
    int size;
   public:
    Stack() {
        // Implement the Constructor
        head=NULL;
        size=0;
        
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return size==0;
    }

    void push(int element) {
        // Implement the push() function
        Node *newNode=new Node(element);
        if(head==NULL){
            head=newNode;
            size++;
            return;
        }
        newNode->next=head;
        head=newNode;
        size++;
       
    }

    int pop() {
        // Implement the pop() function
        if(this->isEmpty()){
            return -1;
        }
        int ans=head->data;
        Node *newHead=head->next;
        delete head;
        head=newHead;
        size--;
        return ans;
    }

    int top() {
        // Implement the top() function
        if(this->isEmpty()){
            return -1;
        }
        return head->data;
    }
};