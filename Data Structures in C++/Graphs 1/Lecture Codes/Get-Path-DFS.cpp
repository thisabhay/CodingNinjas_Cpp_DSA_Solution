// Code : Get Path - DFS
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool getPath(int **edges,int n,int sv,int ev,bool *visited,vector<int> output){
    if(sv==ev){
        // cout<<sv<<" "<<ev<<endl;
        output.push_back(ev);
        for(int i=output.size()-1;i>=0;i--){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return true;
    }
    output.push_back(sv);
    // cout<<"sv : "<<sv<<" "<<output[output.size()-1]<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++){
        // vector<int> newOutput=
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1 && visited[i]==false){
            if(getPath(edges,n,i,ev,visited,output)){
                return true;
            };
        }
    }
    return false;
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
    int sv,ev;
    cin>>sv>>ev;
    // cout<<sv<<" "<<ev<<endl;
    vector<int> output;
    bool ans=getPath(edges,n,sv,ev,visited,output);
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    
    delete [] edges;
    delete [] visited;
}