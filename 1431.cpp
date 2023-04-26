class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m=0;
        for(int i:candies){
            m=max(m,i);
        }
        vector<bool>v;
        for(int i:candies){
            if(i+extraCandies>=m){
                v.push_back(true);
            }else{
                v.push_back(false);
            }
        }
        return v;
    }
};
