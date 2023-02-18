class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        string sm=to_string(num);
        string sn=to_string(num);

        for(int i=0;i<s.size();i++){
            if(s[i]!='9' ){
                for(int i1=0;i1<s.size();i1++){
                    if(s[i1]==s[i]){
                        sm[i1]='9';
                    } 
                }
                break;
            }
            
        }
        
            
            if(s[0]!='0'){
                for(int i=0;i<s.size();i++){
                    if(s[i]==s[0]) sn[i]='0';
                }
            }

        
        int a=stoi(sm);
        int b=stoi(sn);
        return a-b;
    }
};
