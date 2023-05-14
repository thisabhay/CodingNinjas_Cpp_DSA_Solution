// Crossword Problem
#include<bits/stdc++.h>
using namespace std;
#define n 10
bool checkVertical(char** board,string input,int i,int j){
    if(input.size()==0){
        return true;
    }
    if(i<0 || i>=10){
        return false;
    }
    
    if(board[i][j]!='-' && board[i][j]!=input[0]){
        return false;
    }
    return checkVertical(board,input.substr(1),i+1,j);
}
bool checkHorizontal(char** board,string input,int i,int j){
    if(input.size()==0){
        return true;
    }
    if(j<0 || j>=10){
        return false;
    }
    
    if(board[i][j]!='-' && board[i][j]!=input[0]){
        return false;
    }
    return checkHorizontal(board,input.substr(1),i,j+1);
}
vector<bool> setVertical(char** board,string input,int i,int j){
    vector<bool> validChars;
    for(int k=0;k<input.length();k++){
        if(board[i][j]=='-'){
            validChars.push_back(true);
        }
        else{
            validChars.push_back(false);
        }
        board[i][j]=input[k];
        i++;
    }
    return validChars;
}
vector<bool> setHorizontal(char** board,string input,int i,int j){
    vector<bool> validChars;
    for(int k=0;k<input.length();k++){
        if(board[i][j]=='-'){
            validChars.push_back(true);
        }
        else{
            validChars.push_back(false);
        }
        board[i][j]=input[k];
        j++;
    }
    return validChars;
}
void resetVertical(char **board,string input,int i,int j,vector<bool> validChars){
    for(int k=0;k<input.size();k++){
        if(validChars[k]){
            board[i][j]='-';
        }
        i++;
    }
}
void resetHorizontal(char **board,string input,int i,int j,vector<bool> validChars){
    for(int k=0;k<input.size();k++){
        if(validChars[k]){
            board[i][j]='-';
        }
        j++;
    }
}
bool solveCrossword(char **board,vector<string> inputs){
    if(inputs.size()==0){
        return true;
    }
    string input=inputs[inputs.size()-1];
    inputs.pop_back();
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(board[i][j]=='-' || board[i][j]==input[0]){
                if(checkVertical(board,input,i,j)){
                    vector<bool> validChars=setVertical(board,input,i,j);
                    if(solveCrossword(board,inputs)){
                        return true;
                    }
                    resetVertical(board,input,i,j,validChars);
                }
                if(checkHorizontal(board,input,i,j)){
                    vector<bool> validChars=setHorizontal(board,input,i,j);
                    if(solveCrossword(board,inputs)){
                        return true;
                    }
                    resetHorizontal(board,input,i,j,validChars);
                }
            }
        }
    }
    inputs.push_back(input);
    return false;
}
int main(){
    
    // write your code here
    char **board=new char*[10];
    for(int i=0;i<10;i++){
        board[i]=new char[10];
        for(int j=0;j<10;j++){
            cin>>board[i][j];
        }
    }
    string completeInput;
    cin>>completeInput;
    vector<string> inputs;
    string singleInput;
    for(int i=0;i<completeInput.length();i++){
        if(completeInput[i]==';'){
            inputs.push_back(singleInput);
            singleInput="";
        }
        else{
            singleInput+=completeInput[i];
        }
    }
    inputs.push_back(singleInput);
    if(solveCrossword(board,inputs)){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cout<<board[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}