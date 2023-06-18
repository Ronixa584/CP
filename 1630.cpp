class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            vector<int>temp;
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            int diff=temp[1]-temp[0];
            bool t=true;
            for(int i1=2;i1<temp.size();i1++){
                if(temp[i1]-temp[i1-1]!=diff){
                    t=false;
                    break;
                }   
            }
            ans.push_back(t);
        }
        return ans;
    }
};
