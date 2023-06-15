class Solution {
public:

    void dfs(vector<vector<int>>&gr,vector<bool>&visited,int &c,int &i){
        visited[i]=true;
        c++;
        for(int j=0;j<gr[i].size();j++){
            if(visited[gr[i][j]]==false){
                dfs(gr,visited,c,gr[i][j]);
            }
        }
    }


    int maximumDetonation(vector<vector<int>>& bombs) {
        vector<vector<int>>gr(bombs.size());
        int ans=0;
        for(int i=0;i<bombs.size();i++){
            long long x1,x2,r1;
            x1=bombs[i][0];
            x2=bombs[i][1];
            r1=bombs[i][2];
            for(int j=0;j<bombs.size();j++){
                if(i!=j){
                    long long y1,y2;
                    y1=abs(x1-bombs[j][0]);
                    y2=abs(x2-bombs[j][1]);
                    if((y1*y1)+(y2*y2)<=r1*r1){
                        gr[i].push_back(j);
                    }
                }
            }
        }

        for(int i=0;i<bombs.size();i++){
            int c=0;
            vector<bool>visited(bombs.size(),false);
            dfs(gr,visited,c,i);
            ans=max(ans,c);
        }
        return ans;
    }
};





//if(visited[gr[i][j]]==false)
//this condition ensures that the dfs function is only called for nodes that have not been visited yet.It helps avoid revisiting nodes that have already been explored,preventing infinite recursion


//Calculating the square root involves a more computationally expensive operation compared to multiplication, so using the squared values can provide a performance benefit.
