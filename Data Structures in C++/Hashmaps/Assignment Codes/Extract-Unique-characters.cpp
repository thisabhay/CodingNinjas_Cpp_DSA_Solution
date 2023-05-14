// Extract Unique characters
#include<unordered_map>
string uniqueChar(string str) {
	// Write your code here
    string ans;
    unordered_map<char,int> freq;
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
        if(freq[str[i]]==1){
            ans=ans+str[i];
        }
    }
    
    return ans;
}