class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s(arr.begin(),arr.end());
        unordered_map<int,int>m;
        int c=1;
        for(auto i:s){
            m[i]=c;
            c++;
        }
        for(auto &i:arr){
            i=m[i];
        }
        return arr;
    }
};
