// Code: BST Class
class BST {
    // Define the data members
   BinaryTreeNode<int>* root;
   public:
    BST() { 
        // Implement the Constructor
        root=NULL;
    }
    private:
    void print2(BinaryTreeNode<int>* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<":";
        if(root->left!=NULL){
            cout<<"L:"<<root->left->data<<",";
        }
        if(root->right!=NULL){
            cout<<"R:"<<root->right->data;
        }
        cout<<endl;
        print2(root->left);
        print2(root->right);
    }
    bool hasData2(int data,BinaryTreeNode<int>* root){
        if(root==NULL){
            return false;
        }
        if(root->data==data){
            return true;
        }
        if(root->data>data){
            return hasData2(data,root->left);
        }
        else{
            return hasData2(data,root->right);
        }
    }
    BinaryTreeNode<int>* insert2(BinaryTreeNode<int>* root,int data){
        if(root==NULL){
            BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(data);
            return newNode;
        }
        if(root->data>=data){
            root->left=insert2(root->left,data);
            return root;
        }
        else{
            root->right=insert2(root->right,data);
            return root;
        }
    }
    BinaryTreeNode<int>* minimumNode(BinaryTreeNode<int>* root){
        if(root==NULL){
            return root;
        }
        if(root->left==NULL){
            return root;
        }
        return minimumNode(root->left);
    }
    BinaryTreeNode<int>* remove2(BinaryTreeNode<int>* root,int data){
        if(root==NULL){
            return root;
        }
        if(root->data!=data){
            BinaryTreeNode<int>* rootLeft=remove2(root->left,data);
            BinaryTreeNode<int>* rootRight=remove2(root->right,data);
            root->left=rootLeft;
            root->right=rootRight;
            return root;
        }
        if(root->left==NULL && root->right==NULL){
            // delete root;
            return NULL;
        }
        if(root->right==NULL){
            root=root->left;
            return root;
        }
        if(root->left==NULL){
            root=root->right;
            return root;
        }
        // delete root;
        BinaryTreeNode<int>* rightMin=minimumNode(root->right);
        root->right=remove2(root->right,rightMin->data);
        BinaryTreeNode<int>* rootLeft=root->left;
        BinaryTreeNode<int>* rootRight=root->right;
        
        root=rightMin;
        root->left=rootLeft;
        root->right=rootRight;
        return root;
    }
    
    public:
	/*----------------- Public Functions of BST -----------------*/

    void remove(int data) { 
        // Implement the remove() function 
        this->root=remove2(root,data);
    }

    void print() { 
        // Implement the print() function
        print2(root);
    }

    void insert(int data) { 
        // Implement the insert() function 
        this->root=insert2(root,data);
    }

    bool search(int data) {
		// Implement the search() function 
        return hasData2(data,root);
    }
};