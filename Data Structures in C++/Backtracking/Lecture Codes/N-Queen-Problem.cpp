// N-Queen Problem
#include<bits/stdc++.h>
using namespace std;
bool checkValidity(int **output,int t,int i,int j){
    if(i==0){
        return true;
    }
    for(int k=0;k<i;k++){
        if(output[k][j]==1){
            return false;
        }
    }
    int m=i-1;
    int n=j-1;
    while(m>=0 && n>=0){
        if(output[m][n]==1){
            return false;
        }
        m--;
        n--;
    }
    m=i-1;
    n=j+1;
    while(m>=0 && n<t ){
        if(output[m][n]==1){
            return false;
        }
        m--;
        n++;
    }
    return true;
}
void printQueen(int n,int index,int **output){
    if(index==n){
        for(int i=0;i<n;i++){
            // cout<<"reached : ";
            for(int j=0;j<n;j++){
                cout<<output[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    for(int j=0;j<n;j++){
        // cout<<"started checking : "<<index<<" "<<j<<" ";
        if(checkValidity(output,n,index,j)){
            // cout<<"valid output ";
            // cout<<endl;
            output[index][j]=1;
            printQueen(n,index+1,output);
            output[index][j]=0;
        }
    }
    // cout<<"no valid output found for index = "<<index<<endl;
    return;
}
int main(){
    
    // write your code here
    int n;
    cin>>n;
    int **output=new int*[n];
    for(int i=0;i<n;i++){

        output[i]=new int[n];;
        for(int j=0;j<n;j++){
            output[i][j]=0;
        }
    }
    printQueen(n,0,output);
    return 0;
}