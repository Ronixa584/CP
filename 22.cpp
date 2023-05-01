class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        string t="";
        com(s,t,n,n);
        return s;
    }

    void com(vector<string>&s,string t,int op,int cl){
        if(op==0 && cl==0){
            s.push_back(t);
            return;
        }
        if(op>0){
            com(s,t+"(",op-1,cl);
        }
        if(cl>0 && cl>op){
            com(s,t+")",op,cl-1);
        }
    }
};
