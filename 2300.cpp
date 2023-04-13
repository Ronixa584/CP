class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans(spells.size());
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            ans[i]=com(spells[i],potions,success);
        }
        return ans;
    }

    int com(int spells,vector<int>& potions,long long &success){
        int l=0,h=potions.size()-1,mid;
        int temp=potions.size();
        while(l<=h){
            mid=l+(h-l)/2;
            long long p=potions[mid]*(long long)spells;
            if(p>=success){
                h=mid-1;
                temp=mid;
            }else{
                l=mid+1;
            }
        }
        return (potions.size()-temp);
    }
};
