class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int i1=0;i1<grid[0].size();i1++){
                if(grid[i][i1]<0){
                    c++;
                }
            }
        }
        return c;
    }
};
