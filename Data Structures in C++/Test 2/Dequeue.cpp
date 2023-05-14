// Dequeue
class Node {
    public:
        int data;
        Node * next;
        Node *prev;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
            this->prev=NULL;
        }
    
        
    };

class Deque {
    // Complete this class
    Node *head;
    Node *tail;
    int size;
    int capacity;
    public:
    Deque(int value){
        head=NULL;
        tail=NULL;
        capacity=value;
        size=0;
    }
    void insertFront(int element){
        if(size>=capacity){
            cout<<"-1"<<endl;
            return;
        }
        Node *newNode=new Node(element);
        if(head==NULL || tail==NULL){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
        size++;
        
    }
    void insertRear(int element){
        if(size>=capacity){
            cout<<"-1"<<endl;
            return;
        }
        Node *newNode=new Node(element);
        if(head==NULL || tail==NULL){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        size++;
    }
    void deleteFront(){
        if(size==0){
            cout<<"-1"<<endl;
            return;
        }
        Node* newTail=tail->prev;
        delete tail;
        newTail->next=NULL;
        tail=newTail;
        size--;
        return;
    }
    void deleteRear(){
        if(size==0){
            cout<<"-1"<<endl;
            return;
        }
        Node* newHead=head->next;
        delete head;
        newHead->prev=NULL;
        head=newHead;
        size--;
        return;
    }
    int getFront(){
        if(size==0){
            // cout<<"-1"<<endl;
            return -1;
        }
        return tail->data;
    }
    int getRear(){
        if(size==0){
            return -1;
        }
        return head->data;
    }
};

