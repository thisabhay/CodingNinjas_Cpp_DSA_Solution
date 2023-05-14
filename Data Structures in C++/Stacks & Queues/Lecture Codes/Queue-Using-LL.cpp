// Code : Queue Using LL
class Queue {
	// Define the data members
    Node *head;
    Node *tail;
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head=NULL;
        tail=NULL;
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

    void enqueue(int data) {
		// Implement the enqueue() function
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        tail->next=newNode;
        tail=newNode;
        size++;
	}

    int dequeue() {
        // Implement the dequeue() function
        if(size==0){
            return -1;
        }
        int ans=head->data;
        Node *nextNode=head->next;
        delete head;
        head=nextNode;
        size--;
        return ans;
    }

    int front() {
        // Implement the front() function
        if(size==0){
            return -1;
        }
        else{
            return head->data;
        }
    }
};