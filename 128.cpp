class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int>s;
        int mx=1;
        for(auto i:nums){
            s.insert(i);
        }
        for(auto i=s.begin();i!=s.end();i++){
            int t1=*i;
            if(s.find(t1-1)==s.end()){
                int t2=t1+1;
                while(s.find(t2)!=s.end()){
                    t2++;
                }
                mx=max(mx,t2-t1);
            }
        }
        return mx;
    }
};
