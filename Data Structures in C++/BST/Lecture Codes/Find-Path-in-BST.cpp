// Find Path in BST
vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==data){
        vector<int>* ans=new vector<int>;
        ans->push_back(root->data);
        return ans;
    }
    if(root->data>data){
        vector<int>* leftOutput=getPath(root->left,data);
        if(leftOutput!=NULL){
            leftOutput->push_back(root->data);
            return leftOutput;
        }
        else{
            return NULL;
        }
    }
    else{
        vector<int>* rightOutput=getPath(root->right,data);
        if(rightOutput!=NULL){
            rightOutput->push_back(root->data);
            return rightOutput;
        }
        else{
            return NULL;
        }
    }
    // return NULL;
}