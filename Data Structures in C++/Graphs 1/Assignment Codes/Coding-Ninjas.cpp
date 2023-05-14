// Coding Ninjas
#include<bits/stdc++.h>
int helper(vector<vector<char>> & board,int n,int m,int i,int j,int key){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    string value="CODINGNINJA";
    if(board[i][j]!=value[key]){
        return false;
    }
    if(key==(value.size()-1)){
        return true;
    }
    board[i][j]='X';
    if(helper(board,n,m,i-1,j-1,key+1)){
        return true;
    }
    if(helper(board,n,m,i-1,j,key+1)){
        return true;
    }
    if(helper(board,n,m,i-1,j+1,key+1)){
        return true;
    }
    if(helper(board,n,m,i,j-1,key+1)){
        return true;
    }
    if(helper(board,n,m,i,j,key+1)){
        return true;
    }
    if(helper(board,n,m,i,j+1,key+1)){
        return true;
    }
    if(helper(board,n,m,i+1,j-1,key+1)){
        return true;
    }
    if(helper(board,n,m,i+1,j,key+1)){
        return true;
    }
    if(helper(board,n,m,i+1,j+1,key+1)){
        return true;
    }
    board[i][j]=value[key];
    return false;
    
}
bool hasPath(vector<vector<char>> &board, int n, int m) {
    // Write your code here
    string value="CODINGNINJA";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]=='C'){
                board[i][j]='X';
                if(helper(board,n,m,i-1,j-1,1)){
                    return true;
                }
                if(helper(board,n,m,i-1,j,1)){
                    return true;
                }
                if(helper(board,n,m,i-1,j+1,1)){
                    return true;
                }
                if(helper(board,n,m,i,j-1,1)){
                    return true;
                }
                if(helper(board,n,m,i,j,1)){
                    return true;
                }
                if(helper(board,n,m,i,j+1,1)){
                    return true;
                }
                if(helper(board,n,m,i+1,j-1,1)){
                    return true;
                }
                if(helper(board,n,m,i+1,j,1)){
                    return true;
                }
                if(helper(board,n,m,i+1,j+1,1)){
                    return true;
                }
                board[i][j]='C';
            }
        }
    }
    return false;
    
}