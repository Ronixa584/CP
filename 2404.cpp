class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int nn=0;
        for(auto i:m){
            if(i.first%2==0){
                nn=max(nn,i.second);
            }
        }
        for(auto i:m){
            if(i.second==nn && i.first%2==0){
                return i.first;
            }
        }
        return -1;
    }
};
