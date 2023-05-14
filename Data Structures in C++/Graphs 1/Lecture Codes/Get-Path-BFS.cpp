// Code : Get Path - BFS
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> getPathBFS(int **edges,int n,int sv,int ev,bool *visited){
    queue<int> pendingNodes;
    vector<int> ans;
    pendingNodes.push(sv);
    visited[sv]=true;
    if(sv==ev){
        return ans;
    }
    unordered_map<int,int> m;
    while(!pendingNodes.empty()){
        int top=pendingNodes.front();
        pendingNodes.pop();
        if(top==ev){
            int i=ev;
            while(i!=sv){
                ans.push_back(i);
                i=m[i];
            }
            ans.push_back(sv);
            return ans;
        }
        for(int i=0;i<n;i++){
            if(edges[top][i]==1 && visited[i]==false){
                pendingNodes.push(i);
                visited[i]=true;
                m[i]=top;
            }
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
    int sv,ev;
    cin>>sv>>ev;
    // cout<<sv<<" "<<ev<<endl;
    // vector<int> output;
    vector<int> output=getPathBFS(edges,n,sv,ev,visited);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    
    delete [] edges;
    delete [] visited;
}