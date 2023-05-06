class Solution {
public:
    int findDelayedArrivalTime(int a, int d) {
        
        int s=0;
        if(a+d==24){
            return 0;
        }
        if(a+d<24){
            return a+d;
        }
        if(a+d>24){
            return abs(24-(a+d));
        }
        return 0;
    }
};
