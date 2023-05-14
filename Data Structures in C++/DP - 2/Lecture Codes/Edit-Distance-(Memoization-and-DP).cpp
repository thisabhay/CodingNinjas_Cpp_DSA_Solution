// Code : Edit Distance (Memoization and DP)
#include<bits/stdc++.h>
// DP
int editDistance(string s1,string s2){
    int m=s1.length();
    int n=s2.length();
    int **output=new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i]=new int[n+1];
    } 
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                int ans=i-j;
                output[i][j]=abs(ans);
                continue;
            }
            if(s1[m-i]==s2[n-j]){
                output[i][j]=output[i-1][j-1];
                continue;
            }
            int a=output[i-1][j-1];
            int b=output[i-1][j];
            int c=output[i][j-1];
            output[i][j]=1+min(a,min(b,c));
        }
    }
    return output[m][n];
}