class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        for (int i=0;i<numRows;i++){
            vector<int>inner;
            for (int j=0;j<=i;j++){
                if(j==0 || i==j) {//To insert first and last element as 1
                    inner.push_back(1);
                }else{
                    inner.push_back(res[i-1][j-1]+res[i-1][j]);//here i-1 represent inner vector position in res and j represent elements position in a particular inner vector
                }
            }
            res.push_back(inner);
        }
        return res;
    }
};
