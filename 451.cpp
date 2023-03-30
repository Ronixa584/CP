class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(auto i:s){
            m[i]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:m){
            pq.push({i.second,i.first});
        }
        int n=pq.size();
        string s1="";
        m.clear();
        while(!pq.empty()){
            auto p=pq.top();
            while(p.first--) s1+=p.second;
            pq.pop();
        }
        return s1;
    }
};
