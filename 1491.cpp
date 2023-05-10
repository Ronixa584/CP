class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0,d=0;
        sort(begin(salary),end(salary));
        for(double i=1;i<salary.size()-1;i++){
            sum=sum+salary[i];
        }
        d=salary.size()-2;
        return sum/d;
    }
};
