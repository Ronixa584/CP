class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        for(int i=0;i<rowIndex+1;i++){
            vector<int>iv;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    iv.push_back(1);
                }else{
                    iv.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(iv);
        }
        return v[rowIndex];
    }
};
