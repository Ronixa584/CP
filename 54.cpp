class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int lrow=0,hrow=m-1,lcol=0,hcol=n-1;
        int i,j;
        vector<int>ans;
        while(lrow<=hrow && lcol<=hcol){

            i=lrow,
            j=lcol;
            while(j<=hcol){
                ans.push_back(matrix[i][j]);
                j++;
            }
            lrow++;

            i=lrow;
            j=hcol;
            while(i<=hrow){
                ans.push_back(matrix[i][j]);
                i++;
            }
            hcol--;
            if(lrow>hrow || lcol>hcol) break;

            i=hrow;
            j=hcol;
            while(j>=lcol){
                ans.push_back(matrix[i][j]);;
                j--;
            }
            hrow--;

            i=hrow;
            j=lcol;
            while(i>=lrow){
                ans.push_back(matrix[i][j]);;
                i--;
            }
            lcol++;
            
        }
        return ans;
    }
};
