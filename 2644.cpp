class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        map<int,int>m;
        int mx=INT_MIN,ans=0;
        for(auto i=0;i<divisors.size();i++){
            if(m[divisors[i]]==0){
                for(auto j=0;j<nums.size();j++){
                    if(nums[j]%divisors[i]==0){
                        m[divisors[i]]++;
                    }
                }
            }
        }
        for(auto i:m){
            if(i.second>mx){
                mx=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};
