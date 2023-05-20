class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(high+1,-1);
        return com(low,high,zero,one,0,dp);
    }

    long long com(int low,int high,int zero,int one,int i,vector<int>&dp){
        if(i>=high+1) return 0;
        if(dp[i]!=-1) return dp[i];
        long long c=0;
        if(i>=low && i<=high) c++;
        c+=com(low,high,zero,one,i+zero,dp)%1000000007;
        c+=com(low,high,zero,one,i+one,dp)%1000000007;
        return dp[i]=c%1000000007;
    }
};
