// Palindrome Pair
class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;
    bool isRestPalindrome;
    int childCount;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
        isRestPalindrome=false;
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
    string reverse(string input){
        if(input.length()==0){
            string ans="";
            return ans;
        }
        string ans=reverse(input.substr(1));
        ans+=input[0];
        return ans;
    }
    bool isPalindrome(string input){
        return input==reverse(input);
    }
    bool search(TrieNode* root,string word){
        int index=word[0]-'a';
        // base case 
        if(word.size()==0){
            return root->isTerminal || root->isRestPalindrome;
        }
        // small calculation
        if(root->children[index]==NULL){
            if(isPalindrome(word)){
                return root->isTerminal;
            }
            return false;
        }
        // if(isPalindrome(word.substr(1))){
        //     return true;
        // }
        // recursion
        TrieNode* child=root->children[index];
        return search(child,word.substr(1));
    }

    bool add(TrieNode *root, string word) {
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
            root->childCount++;
        }

        // Recursive call
        if(isPalindrome(word.substr(1))){
            root->isRestPalindrome=true;
        }
        return add(child, word.substr(1));
    }

    void add(string word) {
        if (add(root, word)) {
            this->count++;
        }
    }
    bool search(string word) {
        // Write your code here
        return search(root,word);
    }
    /*..................... Palindrome Pair................... */

    bool isPalindromePair(vector<string> words) {
        // Write your code here
        for(int i=0;i<words.size();i++){
            add(reverse(words[i]));
        }
        for(int i=0;i<words.size();i++){
            if(isPalindrome(words[i])){
                return true;
            }
            if(search(words[i])){
                return true;
            }
        }
        return false;
        
    }
};