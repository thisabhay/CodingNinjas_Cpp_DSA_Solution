// Code : Search in Tries
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
    Trie() { 
        root = new TrieNode('\0'); 
    }

    void insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        insertWord(child, word.substr(1));
    }
    bool search(TrieNode* root,string word){
        int index=word[0]-'a';
        if(word.size()==0){
            return root->isTerminal;
        }
        if(root->children[index]==NULL){
            return false;
        }
        TrieNode* child=root->children[index];
        return search(child,word.substr(1));
    }
    void insertWord(string word) { 
        return insertWord(root, word); 
    }

    bool search(string word) {
        // Write your code here
        return search(root,word);
    }
};