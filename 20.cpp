class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char t=s[i];
            if(t=='(' || t=='{' || t=='['){
                st.push(t);
            }else{
                if(!st.empty()){
                    char t1=st.top();
                    if(t==')' && t1=='(' ||
                       t=='}' && t1=='{' ||
                       t==']' && t1=='[' ){
                        st.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
