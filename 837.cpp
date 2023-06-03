class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(k==0 || n>=k+maxPts-1) return 1.0;
        vector<double>dp(n+1);
        dp[0]=1.0;
        double W=1.0,ans=0.0;
        for(int i=1;i<=n;i++){
            dp[i]=W/maxPts;//Calculating probability P(n)+P(n-1)+...P(k)
            if(i<k){
                W+=dp[i];
            }else{
                ans+=dp[i];
            }
            if(i-maxPts>=0){
                W-=dp[i-maxPts];
            }
        }
        return ans;
    }
};
