class Solution {
public:
    int minAddToMakeValid(string s) {
        int i=0,n=s.size(),c=0,ans=0;
        while(i<n){
            if(s[i]=='('){
                c++;
            }
            if(s[i]==')'){
                c--;
            }
            if(c<0){
                ans++;
                c=0;
            }
            i++;
        }
        return ans+c;
    }
};
