class Solution {
public:
    int maxPower(string s) {
        // if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        int c=1,mx=0;
        s=s+s[s.size()];
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                c++;
            }else{
                mx=max(mx,c);
                c=1;
            }
        }
        if(s.size()==2){
            if(s[0]==s[1]) return 2;
        }
        return mx;
    }
};
