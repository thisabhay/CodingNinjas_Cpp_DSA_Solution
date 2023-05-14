#include<climits>
int minCostPath(int **input,int m,int n){
    int **output=new int*[m];
    for(int i=0;i<m;i++){
        output[i]=new int[n];
    }
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i==m-1 && j==n-1){
                output[i][j]=input[i][j];
                continue;
            }
            int a;
            if((i+1)<m){
                a=output[i+1][j];
            }
            else{
                a=INT_MAX;
            }
            int b;
            if((j+1)<n){
                b=output[i][j+1];
            }
            else{
                b=INT_MAX;
            }
            int c;
            if((i+1)<m && (j+1)<n){
                c=output[i+1][j+1];
            }
            else{
                c=INT_MAX;
            }
            output[i][j]=input[i][j]+min(a,min(b,c));
        }
    }
    return output[0][0];
}