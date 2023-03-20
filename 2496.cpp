class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans=0;
        for(int i=0;i<strs.size();i++){
            bool flag=false;
            int temp_size=strs[i].size();
            for(int j=0;j<temp_size;j++){
                if(strs[i][j]>'9'){
                    flag=true;
                    break;
                }
            }
            if(flag){
                ans=max(ans,temp_size);
            }else{
                ans=max(ans,stoi(strs[i]));
            }
        }
        return ans;
    }
};
