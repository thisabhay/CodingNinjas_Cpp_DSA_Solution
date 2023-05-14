// Code : All connected components
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void getConnections(int **edges,int n,int sv,bool* visited,vector<int> &output){
    
    output.push_back(sv);
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(edges[sv][i]==1 && visited[i]==false){
            // visited[i]=true;
            getConnections(edges,n,i,visited,output);
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
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(visited[i]==false){
        vector<int> v;
        getConnections(edges,n,i,visited,v);
        ans.push_back(v);
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            sort(ans[i].begin(),ans[i].end());
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    
    delete [] edges;
    delete [] visited;
}