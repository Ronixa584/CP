class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>output;
        string temp="";
        perm(output,temp,s,0);
        return output;
    }

    void perm(vector<string>&output,string temp,string &s,int i){
        if(i==s.size()){
            output.push_back(temp);
            return;
        }
        
        if(s[i]>='0' && s[i]<='9'){
            temp+=s[i];
            perm(output,temp,s,i+1);
        }else{
            temp+=toupper(s[i]);
            perm(output,temp,s,i+1);
            temp.pop_back();
            temp+=tolower(s[i]);
            perm(output,temp,s,i+1);
        }
    }
};
