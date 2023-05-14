// Loot Houses
//DP

int maxMoneyLooted(int *arr,int n){
    int *output=new int [n+1];
    output[0]=0;
    for(int i=1;i<=n;i++){
        int a;
        if(i>=2){
            a=arr[n-i]+output[i-2];
        }
        else{
            a=arr[n-i];
        }
        int b=output[i-1];
        // cout<<a<<" "<<b<<endl;
        output[i]=max(a,b);
    }
    return output[n];
}