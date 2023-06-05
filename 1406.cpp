class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        vector<int>dp(stoneValue.size(),INT_MAX);
        int ans=com(dp,stoneValue,0);
        if(ans>0) return "Alice";
        else if(ans<0) return "Bob";
        else return "Tie";
    }

    int com(vector<int>&dp,vector<int>&stoneValue,int i){
        if(i>=stoneValue.size()) return 0;
        if(dp[i]!=INT_MAX) return dp[i];
        int takeone=stoneValue[i]-com(dp,stoneValue,i+1);
        int taketwo=INT_MIN;
        if(i+1<stoneValue.size()){
            taketwo=stoneValue[i]+stoneValue[i+1]-com(dp,stoneValue,i+2);
        }
        int takethree=INT_MIN;
        if(i+2<stoneValue.size()){
            takethree=stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-com(dp,stoneValue,i+3);
        }
        return dp[i]=max({takeone,taketwo,takethree});
    }
};
