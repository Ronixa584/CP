class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // int m=n1*n1,n=n1;
        vector<vector<int>>res(n,vector<int>(n));
        int lrow=0,hrow=n-1,lcol=0,hcol=n-1;
        int i,j,a=1;
        vector<int>ans;
        while(lrow<=hrow && lcol<=hcol){

            i=lrow,
            j=lcol;
            while(j<=hcol){
                // ans.push_back(matrix[i][j]);
                res[i][j]=a;
                a++;
                j++;
            }
            lrow++;
            // ans1.push_back(ans);

            i=lrow;
            j=hcol;
            while(i<=hrow){
                // ans.push_back(matrix[i][j]);
                res[i][j]=a;
                a++;
                i++;
            }
            hcol--;
            if(lrow>hrow || lcol>hcol) break;

            i=hrow;
            j=hcol;
            while(j>=lcol){
                // ans.push_back(matrix[i][j]);;
                res[i][j]=a;
                a++;
                j--;
            }
            hrow--;

            i=hrow;
            j=lcol;
            while(i>=lrow){
                // ans.push_back(matrix[i][j]);;
                res[i][j]=a;
                a++;
                i--;
            }
            lcol++;
    }
    return res;
    }
};
