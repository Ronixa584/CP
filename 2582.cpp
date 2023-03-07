class Solution {
public:
    int passThePillow(int n, int time) {
        int d=1,c=0,t=0;
        while(t<=time){
            c=c+d;
            t++;
            if(c==n) d=-1; //Overflow
            if(c==1) d=1; //Underflow
        }
        return c;
    }
};
