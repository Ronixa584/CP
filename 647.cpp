class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
            int x=i-1,y=i+1;//backward and forward
            c++;
            while(x>=0 && y<n && s[x]==s[y]){
                c++;
                x--;
                y++;
            }
            x=i,y=i+1;
            while(x>=0 && y<n && s[x]==s[y]){
                c++;
                x--;
                y++;
            }
        }
        return c;
    }
};
