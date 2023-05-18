class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long>dp(questions.size(),-1);
        return com(questions,0,dp);
    }

    long long com(vector<vector<int>>&questions,int i,vector<long long>&dp){
        if(i>=questions.size()){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        long long take_it=questions[i][0]+com(questions,i+questions[i][1]+1,dp);
        long long leave_it=com(questions,i+1,dp);
        return dp[i]=max(take_it,leave_it);
    }
};
