// Code : BFS Traversal
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void printBFS(int **edges,int n,int sv,bool* visited){
    queue<int> q;
    q.push(sv);
    visited[sv]=true;
    while(!q.empty()){
        int top=q.front();
        q.pop();
        cout<<top<<" ";
        // visited[top]=true;
        for(int i=0;i<n;i++){
            if(i==top){
                continue;
            }
            if(edges[top][i]==1 && visited[i]==false){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}
int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    if(n==0){
        return 0;
    }
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    // int x,y;
    // cin>>x>>y;
    // edges[x][y]=1;
    // edges[y][x]=1;
    // int sv=x;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        edges[x][y]=1;
        edges[y][x]=1;

    }
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    // printBFS(edges,n,0,visited);
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            printBFS(edges,n,i,visited);
        }
    }
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    
    delete [] edges;
    delete [] visited;
}