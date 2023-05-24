class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(auto i:details){
            // cout<<i[11]<<" "<<i[12]<<endl;
            if(i[11]>'6') c++;
            else if(i[11]=='6' && i[12]>'0') c++;
        }
        return c;
    }
};
