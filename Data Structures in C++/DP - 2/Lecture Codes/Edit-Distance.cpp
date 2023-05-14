// Edit Distance
#include<bits/stdc++.h>
int editDistance(string s1, string s2) {
	// Write your code here
    if(s1.length()==0 || s2.length()==0){
        // int ans=abs(s1.size()-s2.size());
        // int ans=max(s1.size(),s2.size())-min(s1.size(),s2.size());
        int a=s1.size()-s2.size();
        int ans=abs(a);
        return ans;
    }
    if(s1[0]==s2[0]){
        return editDistance(s1.substr(1),s2.substr(1));
    }
    // modified the first character to make it equal
    int a=1+editDistance(s1.substr(1),s2.substr(1));
    // removed first character from first string
    int b=1+editDistance(s1.substr(1),s2);
    // removed first character from second string
    int c=1+editDistance(s1,s2.substr(1));
    return min(a,min(b,c));
}