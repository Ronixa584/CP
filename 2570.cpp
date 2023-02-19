class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        int i=0,j=0,t=0;
        vector<vector<int>>ans;
        vector<int>v;
        vector<int>vect;
        while(i<s1 && j<s2){
            if(nums1[i][0]==nums2[j][0]){
                v.push_back(nums1[i][0]);
                v.push_back(nums1[i][1]+nums2[j][1]);
                ans.push_back(v);
                v.clear();
                i++;
                j++;
            }else
            if(nums1[i][0]<nums2[j][0]){
                v.push_back(nums1[i][0]);
                v.push_back(nums1[i][1]);
                ans.push_back(v);
                i++;
                v.clear();
                // j++;
            }
            else{
                v.push_back(nums2[j][0]);
                v.push_back(nums2[j][1]);
                ans.push_back(v);
                j++;
                v.clear();
                // j++;
            }
        }
        if(s1==0) return nums2;
        if(s2==0) return nums1;
        while(i<s1){
                v.push_back(nums1[i][0]);
                v.push_back(nums1[i][1]);
                ans.push_back(v);
                i++;
                v.clear();            
        }
        while(j<s2){
                v.push_back(nums2[j][0]);
                v.push_back(nums2[j][1]);
                ans.push_back(v);
                j++;
                v.clear();            
        }
        return ans;
    }
};
