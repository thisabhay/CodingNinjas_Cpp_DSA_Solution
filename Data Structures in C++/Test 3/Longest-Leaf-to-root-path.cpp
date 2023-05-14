// Longest Leaf to root path
vector<int>* longestPath(BinaryTreeNode<int>* root) {
	// Write your code here
    if(root==NULL){
        vector<int>* ans=new vector<int>();
        return ans;
    }
    if(root->left==NULL && root->right==NULL){
        vector<int>* ans=new vector<int>();
        ans->push_back(root->data);
        return ans;
    }
    vector<int>* leftOutput=longestPath(root->left);
    vector<int>* rightOutput=longestPath(root->right);
    if(rightOutput->size()>leftOutput->size()){
        rightOutput->push_back(root->data);
        delete leftOutput;
        return rightOutput;
    }
    else{
        leftOutput->push_back(root->data);
        delete rightOutput;
        return leftOutput;
    }

}