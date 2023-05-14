// Minimum bracket Reversal
#include<bits/stdc++.h>
int countBracketReversals(string input) {
	// Write your code here
    int i=0;
    int count=0;
    stack<int> s;
    while(input[i]!='\0'){
        if(input[i]=='{'){
            s.push('{');
        }
        if(input[i]=='}'){
            if(s.empty()){
                count++;
                s.push('{');
            }
            else{
                s.pop();
            }
        }
        i++;
    }
    if(s.size()%2==0){
        return s.size()/2+count;
    }
    else{
        return -1;
    }
}