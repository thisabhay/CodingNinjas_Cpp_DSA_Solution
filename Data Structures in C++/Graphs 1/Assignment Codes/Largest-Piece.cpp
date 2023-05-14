// Largest Piece
int helper(vector<vector<int>> &cake, int n,int i,int j){
    if(i<0 || i>=n || j<0 || j>=n){
        return 0;
    }
    if(cake[i][j]!=1){
        return 0;
    }
    cake[i][j]=-1;
    int count=1;
    count+=helper(cake,n,i-1,j);
    count+=helper(cake,n,i,j-1);
    count+=helper(cake,n,i,j+1);
    count+=helper(cake,n,i+1,j);
    return count;
}
int getBiggestPieceSize(vector<vector<int>> &cake, int n) {
    // Write your code here
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cake[i][j]==1){
                cake[i][j]=-1;
                int count=1;
                count+=helper(cake,n,i-1,j);
                count+=helper(cake,n,i,j-1);
                count+=helper(cake,n,i,j+1);
                count+=helper(cake,n,i+1,j);
                if(count>max){
                    max=count;
                }
            }
        }
    }
    return max;
}