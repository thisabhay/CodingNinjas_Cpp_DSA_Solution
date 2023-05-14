// Code : Kruskal's Algorithm
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    int source;
    int destination;
    int weight;
    
};
bool compareInterval(edge e1,edge e2){
    return (e1.weight<e2.weight);
}
class subset{
    public:
    int parent;
    int rank;
    
};
int findParent(int value,subset *parent){
    if(value==parent[value].parent){
        return value;
    }
    parent[value].parent=findParent(parent[value].parent,parent);
    return parent[value].parent;
}
int main() {
    // Write your code here
    int n,e;
    cin>>n>>e;
    edge *edgeArr=new edge[e];
    for(int i=0;i<e;i++){
        edge e1;
        cin>>e1.source;
        cin>>e1.destination;
        cin>>e1.weight;
        edgeArr[i]=e1;
    }
    sort(edgeArr,edgeArr+e,compareInterval);
    subset *parent=new subset[n];
    for(int i=0;i<n;i++){
        // subset s(i);
        parent[i].parent=i;
        parent[i].rank=0;
    }
    int count=0;
    int index=0;
    edge *output=new edge[n-1];
    while(count<(n-1)){
        edge currEdge=edgeArr[index];
        int sourceParent=findParent(currEdge.source,parent);
        // parent[currEdge.source].parent=sourceParent;
        int destParent=findParent(currEdge.destination,parent);
        // parent[currEdge.destination].parent=destParent;
        if(sourceParent!=destParent){
            // cout<<"parents : "<<sourceParent<<" "<<destParent<<endl;
            // cout<<"values : "<<currEdge.source<<" "<<currEdge.destination<<" "<<currEdge.weight<<endl;
            output[count]=currEdge;
            count++;
            if(parent[sourceParent].rank>parent[destParent].rank){
                parent[destParent].parent=sourceParent;
            }
            else if(parent[sourceParent].rank<parent[destParent].rank){
                parent[sourceParent].parent=destParent;
            }
            else{
                parent[destParent].parent=sourceParent;
                parent[sourceParent].rank++;
            }
        }
        index++;
    }
    // cout<<"printing output"<<endl;
    for(int i=0;i<n-1;i++){
        edge temp=output[i];
        int first=min(temp.source,temp.destination);
        int second=max(temp.source,temp.destination);
        cout<<first<<" "<<second<<" "<<temp.weight<<endl;
    }
}