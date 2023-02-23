class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pl=0,nl=0,ans=0;
        for(auto i:nums){
            if(i==0){
                pl=0;
                nl=0;
            }else{
                if(i<0) swap(pl,nl);
                if(pl>0 || i>0) pl++;
                if(nl>0 || i<0) nl++;
                ans=max(ans,pl);
            }
        }
        return ans;
    }
};
