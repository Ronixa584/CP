class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            if(i%3==0 || i%5==0 || i%7==0) v.push_back(i);
        }
        int s=0;
        for(auto i:v){
            s+=i;
        }
        return s;
    }
};
