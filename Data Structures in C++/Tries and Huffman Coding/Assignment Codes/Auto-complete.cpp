// Auto complete
class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }
    void autoComplete2(TrieNode* root,vector<string> &output){
        // if(root==NULL){
        //     string ans="";
        //     output.push_back(ans);
        //     return;
        // }
        for(int i=0;i<26;i++){
            
            if(root->children[i]!=NULL){
            vector<string> newVector;
            autoComplete2(root->children[i],newVector);
            output.insert(output.end(),newVector.begin(),newVector.end());
            }
        }
        if(root->isTerminal){
            string ans="";
            output.push_back(ans);
        }
        for(int i=0;i<output.size();i++){
            
            output[i]=root->data+output[i];
        }
        
    }
    void autoComplete(TrieNode* root,string pattern,string fullPattern){
        if(root==NULL){
            return;
        }
        if(pattern.length()==0){
            vector<string> ans;
            for(int i=0;i<26;i++){
            if(root->children[i]!=NULL){
            vector<string> ans2;
            autoComplete2(root->children[i],ans2);
            for(int i=0;i<ans2.size();i++){
                ans2[i]=fullPattern+ans2[i];
                cout<<ans2[i]<<endl;
            }
            }
            }
            
            // autoComplete2(root,ans);
            
            if(root->isTerminal){
                cout<<fullPattern<<endl;
            }
            return;
        }
        int index=pattern[0]-'a';
        TrieNode* child=root->children[index];
        autoComplete(child,pattern.substr(1),fullPattern);
    }
    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }

    void autoComplete(vector<string> input, string pattern) {
        // Write your code here
        for(int i=0;i<input.size();i++){
            insertWord(input[i]);
        }
        // vector<string> ans="";
        autoComplete(root,pattern,pattern);
        
    }
};