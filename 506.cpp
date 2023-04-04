class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        priority_queue<int>pq(score.begin(), score.end());
        unordered_map<int,string>m;
        int c=0;

        if(!pq.empty()){
            m[pq.top()]="Gold Medal";
            pq.pop();
            c++;
        }

        if(!pq.empty()){
            m[pq.top()]="Silver Medal";
            pq.pop();
            c++;
        }

        if(!pq.empty()){
            m[pq.top()]="Bronze Medal";
            pq.pop();
            c++;
        }

        while(!pq.empty()){
            c++;
            m[pq.top()]=to_string(c);
            pq.pop();    
        }

        vector<string>v;
        for(int i=0;i<score.size();i++){
            v.push_back(m[score[i]]);
        }
        return v;    
    }
};
