class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        vector<int>dp(n+1,-1);
        return com(n,dp);
    }

    int com(int n,vector<int>&dp){
        if(n<=2){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=com(n-1,dp)+com(n-2,dp);
        return dp[n];
    }
};
