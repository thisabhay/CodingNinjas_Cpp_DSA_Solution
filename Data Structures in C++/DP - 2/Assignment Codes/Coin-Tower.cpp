// Coin Tower
#include<vector>
string findWinner(int n, int x, int y){
	// Write your code here .
    // We make a winner array corresponding to Beerus
    vector<bool> dp(n + 1);
    
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i = 2; i < n + 1; i++) {
       	int state1 = 0;
        int state2 = 0;
        int state3 = 0;
        
        if(i - 1 >= 0) {
            state1 = dp[i - 1] ^ 1;
        }
        
        if(i - x >= 0) {
            state2 = dp[i - x] ^ 1;
        }
        
        if(i - y >= 0) {
            state3 = dp[i - y] ^ 1;
        }
        
        dp[i] = max(state1, max(state2, state3));
    }
    
    if(dp[n]) {
        return "Beerus";
    } else {
        return "Whis";
    }
}