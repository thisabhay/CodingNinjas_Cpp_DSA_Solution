// Maximum Square Matrix With All Zeros
#include<vector>
int findMaxSquareWithAllZeros(int **arr, int n, int m) {
	//Write your code here
    vector<vector<int>> dp(n, vector<int>(m));
    int answer = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 0) {
                dp[i][j] = 1;
            	if(i > 0 and j > 0) {
                	dp[i][j] += min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
            	}
            	answer = max(answer, dp[i][j]);
            }
        }
    }
    
    return answer;
}