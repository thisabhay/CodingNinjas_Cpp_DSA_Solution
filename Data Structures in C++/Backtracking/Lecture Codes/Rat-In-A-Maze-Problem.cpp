// Rat In A Maze Problem
#include<bits/stdc++.h>
using namespace std;
void getPath(int n,int **maze,int **output,int i,int j){
    if(i==n-1 && j==n-1){
        output[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<output[i][j]<<" ";
            }
        }
        cout<<endl;
        output[i][j]=0;
        return;
    }
    if(i<0 || i>=n || j<0 || j>=n){
        return;
    }
    if(maze[i][j]==0){
        return;
    }
    maze[i][j]=0;
    output[i][j]=1;
    getPath(n,maze,output,i-1,j);
    getPath(n,maze,output,i+1,j);
    getPath(n,maze,output,i,j-1);
    getPath(n,maze,output,i,j+1);
    maze[i][j]=1;
    output[i][j]=0;
    return;
    
    
}
int main() {

	// Write your code here
    int n;
    cin>>n;
    int **maze=new int*[n];
    
    
    for(int i=0;i<n;i++){
        maze[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    int **output=new int*[n];
    for(int i=0;i<n;i++){
        output[i]=new int[n];
        for(int j=0;j<n;j++){
            output[i][j]=0;
        }
    }
    // memset(output,0,sizeof(output));
    getPath(n,maze,output,0,0);
    
	return 0;
}
