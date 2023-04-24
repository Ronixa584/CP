class Solution {
public:
    int addMinimum(string word) {
        int i=0,n=word.size(),ans=0;
        while(i<n){
            int c=0;
            if(word[i]=='a'){
                c+=2;
                i++;
            }
            if(word[i]=='b' and i<n){
                c-=1;
                i++;
            }
            if(word[i]=='c' and i<n){
                c-=1;
                i++;
            }
            if(c<0){
                ans+=(3+c);
            }else{
                ans+=c;
            }
            
        }
        return ans;
    }
};
