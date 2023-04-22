class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ls=find_lps(s,0,n-1,dp);
        return ls;
    }

    int find_lps(string& s,int i,int j,vector<vector<int>>&dp){
        if(i==j) return 1;
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];

        if(s[i]==s[j]){
            return (2+find_lps(s,i+1,j-1,dp));
        }
        int rm_left=find_lps(s,i+1,j,dp);
        int rm_right=find_lps(s,i,j-1,dp);
        return dp[i][j]=max(rm_left,rm_right);
    }
};
