class Solution {
public:
    string reverseWords(string s) {
        string str="",ans="";
        vector<string>temp;
        for(auto i=0;i<s.size();i++){
            while(s[i]!=' ' && i<s.size()){
                str+=s[i];
                i++;
            }

            if(str!=""){
                temp.push_back(str);
            }
            str="";
        }

        for(int i=temp.size()-1;i>=0;i--){
            ans+=temp[i];
            if(i!=0) ans+=" ";

        }
        return ans;
    }
};
