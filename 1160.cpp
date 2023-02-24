class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int c=0;
        unordered_map<char,int>m;
        for(auto i:chars){
            m[i]++;
        }
        for(auto i:words){
            string s=i;
            unordered_map<char,int>mw;
            for(int j=0;j<s.size();j++){
                mw[s[j]]++;
            }
            bool f=1;
            for(auto t:mw){
                if(mw[t.first]>m[t.first]){
                    f=0;
                    break;
                }
            }
            if(f){
                c=c+s.size();
            }
        }
        return c;
    }
};
