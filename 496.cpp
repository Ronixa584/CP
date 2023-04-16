class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            auto temp=find(nums2.begin(),nums2.end(),nums1[i]);
            int index=temp-nums2.begin();
            int temp1=-1;
            for(int j=index+1;j<nums2.size();j++){
                if(nums2[j]>nums2[index]){
                    temp1=nums2[j];
                    break;
                }
            }
            v.push_back(temp1);
        }
        return v;
    }
};
