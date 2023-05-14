// Shortest Subsequence
#include<climits>
// DP
int solve(string s,string v){
    int **output=new int*[s.length()+1];
    for(int i=0;i<=s.length();i++){
        output[i]=new int[v.length()+1];
    }
    for(int k=0;k<=s.length();k++){
        for(int l=0;l<=v.length();l++){
            if(k==0){
                output[k][l]=INT_MAX;
                continue;
            }
            if(l==0){
                output[k][l]=1;
                continue;
            }
            
            
            int i=v.length()-l;
            while(i<v.length()){
                if(s[s.length()-k]==v[i]){
                    break;
                }
                i++;
            }
            if(i==v.length()){
                output[k][l]=1;
                continue;
            }
            i++;
            int p=v.length()-i;
            int a=output[k-1][l];
            int b=output[k-1][p];
            if(b<INT_MAX){
                b++;
            }
            // cout<<"a : "<<a<<" b: "<<b<<endl;
            output[k][l]=min(a,b);
            }
        }
    return output[s.length()][v.length()];
}