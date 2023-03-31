class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>m;
        priority_queue<pair<int,int>>pq;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            pq.push({-1*i.second,i.first});
        }
        nums.clear();
        while(pq.empty()==false){
            int c=-1*pq.top().first;
            int n=pq.top().second;
            for(auto i=0;i<c;i++){
                nums.push_back(n);
            }
            pq.pop();
        }
        return nums;
    }
};
