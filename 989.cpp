class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size(),i=n-1,c=0;
        vector<int>v;
        while(k>0 || i>=0 || c>0){
            int s=c;
            if(k>0){
                int r=k%10;
                s=s+r;
                k=k/10;
            }
            if(i>=0){
                s=s+num[i];
                i--;
            }
            c=s/10;//store carry
            v.push_back(s%10);//pushing ans
        }
        reverse(begin(v),end(v));
        return v;
    }
};
