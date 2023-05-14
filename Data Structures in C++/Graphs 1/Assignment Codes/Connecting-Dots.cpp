// Connecting Dots
#include<bits/stdc++.h>
int helper(vector<vector<char>> &board, int n, int m,int i,int j,char value){
    if(i<0 || i>=n || j<0 || j>=m){
        return -1;
    }
    char value2=value+'2';
    if(board[i][j]==value2){
        return 0;
    }
    if(board[i][j]!=value){
        return -1;
    }
    // int count=0;
    board[i][j]='-1';
    int arr[8];
    arr[0]=helper(board,n,m,i-1,j-1,value);
    arr[1]=helper(board,n,m,i-1,j,value);
    arr[2]=helper(board,n,m,i-1,j+1,value);
    arr[3]=helper(board,n,m,i,j-1,value);
    // count+=helper(board,n,m,i,j,value);
    arr[4]=helper(board,n,m,i,j+1,value);
    arr[5]=helper(board,n,m,i+1,j-1,value);
    arr[6]=helper(board,n,m,i+1,j,value);
    arr[7]=helper(board,n,m,i+1,j+1,value);
    // board[i][j]=value;
    int count=*max_element(arr,arr+8);
    if(count!=-1){
        count++;
    }
    return count;
}
bool hasCycle(vector<vector<char>> &board, int n, int m) {
    // Write your code here.
    for(int a=0;a<26;a++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char value='A'+a;
                char value2=value+'2';
                if(value==board[i][j]){
                    // int count=1;
                    board[i][j]=value2;
                    int arr[8];
                    arr[0]=helper(board,n,m,i-1,j-1,value);
                    arr[1]=helper(board,n,m,i-1,j,value);
                    arr[2]=helper(board,n,m,i-1,j+1,value);
                    arr[3]=helper(board,n,m,i,j-1,value);
                    // count+=helper(board,n,m,i,j,value);
                    arr[4]=helper(board,n,m,i,j+1,value);
                    arr[5]=helper(board,n,m,i+1,j-1,value);
                    arr[6]=helper(board,n,m,i+1,j,value);
                    arr[7]=helper(board,n,m,i+1,j+1,value);
                    board[i][j]=value;
                    int count=*max_element(arr,arr+8);
                    if(count!=-1){
                        count++;
                    }
                    // cout<<value<<" "<<count<<endl;
                    if(count>=4){
                        return true;
                    }
                    // board[i][j]=value;
                }
            }
        }
    }
    return false;
}


