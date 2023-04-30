class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        string sa="";
        int n=s.size(),m=part.size();
        for(int i=0;i<n;i++){
            st.push(s[i]);
            if(st.size()>=m){
                if(check(st,part)){
                    int c=m;
                    while(c--){
                        st.pop();
                    }
                }
            }
        }

        while(!st.empty()){
            sa+=st.top();
            st.pop();
        }
        reverse(sa.begin(), sa.end());
        return sa;
    }

    bool check(stack<char> st, string part){
        int i=part.size()-1;
        while(i>=0 && st.top()==part[i]){
            // if(st.top()==part[i]){
                st.pop();
                i--;
            // }
        }
        return (i==-1);
    }

};
