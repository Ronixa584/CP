class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(), -1));
        int ans=com(nums1,nums2,0,0,dp);
        return ans;
    }

    int com(vector<int>& nums1,vector<int>& nums2,int i,int j,vector<vector<int>>&dp){
        if(i==nums1.size() || j==nums2.size()){
            return 0;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];  
        } 
        if(nums1[i]==nums2[j]){
            int t=com(nums1,nums2,i+1,j+1,dp);
            // cout<<t<<" "<<endl;
            return dp[i][j]=1+t;
        }else{
            int t1=com(nums1,nums2,i+1,j,dp);
            int t2=com(nums1,nums2,i,j+1,dp);
            // cout<<t1<<" "<<t2<<"   "<<endl;
            return dp[i][j]=max(t1,t2);
        }
    }
};



