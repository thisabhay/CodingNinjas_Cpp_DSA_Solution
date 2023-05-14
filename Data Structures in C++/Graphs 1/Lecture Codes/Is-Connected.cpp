// Code : Is Connected ?
#include <iostream>
using namespace std;
void isConnected(int **edges,int n,int sv,bool *visited){
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(edges[sv][i]==1 && visited[i]==false){
            isConnected(edges,n,i,visited);
        }
    }
}
int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
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
    isConnected(edges,n,0,visited);
    bool isConnected2=true;
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            isConnected2=false;
            break;
        }
    }
    if(isConnected2){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    
    delete [] edges;
    delete [] visited;
}