class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int>s;
        for(auto i:banned){
            s.insert(i);
        }
        int c=0;
        int s1=0;
        for(auto i=1;i<=n;i++){
            if(s.count(i)==0 && (s1+i)<=maxSum){
                s1=s1+i;
                c++;
            }
        }
        return c;
    }
};
