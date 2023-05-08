class Solution {
public:
    int bulbSwitch(int n) {
        int c=0;
        for(int i=1;i*i<=n;i++){
            c++;
        }
        return c;
    }
};
