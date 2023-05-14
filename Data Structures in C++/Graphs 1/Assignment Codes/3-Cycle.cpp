// 3 Cycle
#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    if(n==0){
        cout<<0<<endl;
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
    int count=0;
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        visited[i]=true;
        for(int j=0;j<n;j++){
            if(edges[i][j]==1 && visited[j]==false){
                visited[j]=true;
                for(int k=0;k<n;k++){
                    if(edges[j][k]==1 && visited[k]==false){
                        if(edges[k][i]==1){
                            count++;
                        }
                    }
                }
                visited[j]=false;
            }
        }
        visited[i]=false;
    }
    cout<<count/6<<endl;
}