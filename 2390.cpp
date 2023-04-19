class Solution {
public:
    string removeStars(string s) {
        int c=0;
        int n=s.size();
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(s[i]=='*'){
                c++;
            }else{
                if(c>0){
                    c--;
                }else{
                    ans+=s[i];
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
