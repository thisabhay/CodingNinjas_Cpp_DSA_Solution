// Code : Balanced Parenthesis
#include<bits/stdc++.h>
bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> s;
    int i=0;
    while(expression[i]!=0){
        if(expression[i]=='('){
            s.push('(');
        }
        if(expression[i]==')'){
            if(s.empty()){
                return false;
            }
            else{
                s.pop();
            }
        }
        i++;
    }
    return s.empty();
}