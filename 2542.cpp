class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums1.size();i++){
            v.push_back({nums2[i],nums1[i]});
        }
        
        sort(v.begin(),v.end());//Sorting the pairs based on nums2

        priority_queue<int,vector<int>,greater<int>>pq;//min-heap
        long long sum=0,ans=0;

        //Due to reverse iteration we can get select the elements with higher nums2 values first from v
        for(int i=nums1.size()-1;i>=0;i--){
            pq.push(v[i].second);
            sum+=v[i].second;

            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }//This ensures that the size of pq never exceeds k
            if(pq.size()==k){
                ans=max(ans,sum*v[i].first);
            }
        }
        return ans;
    }
};
