// Check redundant brackets
#include<bits/stdc++.h>
bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> s;
    bool redundantFront=false;
    int i=0;
    while(expression[i]!='\0'){
        if(expression[i]=='('){
            s.push('(');
        }
        else if(expression[i]==')'){
            int count=0;
            while(s.top()!='('){
                s.pop();
                count++;
            }
            s.pop();
            if(count<2){
                return true;
            }
            
        }
        else{
            s.push(expression[i]);
        }
        i++;
    }
    return false;
}