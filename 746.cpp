class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        int a=com(cost,0,dp);
        int b=com(cost,1,dp);
        return min(a,b);
    }

    int com(vector<int>&cost,int i,vector<int>&dp){
        if(i>=cost.size()){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        int t=cost[i]+com(cost,i+1,dp);
        int n=cost[i]+com(cost,i+2,dp);
        return dp[i]=min(t,n);
    }
};
