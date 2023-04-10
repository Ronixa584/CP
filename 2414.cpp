class Solution {
public:
    int longestContinuousSubstring(string s) {
        int c=1;
        int mx=-1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i+1]-s[i]==1){
                c++;
            }
            else{
                mx=max(mx,c);
                c=1;
            }
        }
        return max(mx,c);
    }
};
