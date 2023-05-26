class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,pair<int,double>> mp;
        queue<pair<vector<string>,int>>q;
        mp[equations[0][0]]={0,values[0]};
        mp[equations[0][1]]={0,1};
        for(int i=1;i<equations.size();i++){
            vector<string>x=equations[i];
            //If both variables of the equation are not present in mp, the equation is added to the queue for later processing.
            if(!mp.count(x[0]) && !mp.count(x[1]))
                q.push({x,i});
            else if(!mp.count(x[0]))
                mp[x[0]]={mp[x[1]].first,values[i] * mp[x[1]].second};
            else if(!mp.count(x[1]))
                mp[x[1]]={mp[x[0]].first, mp[x[0]].second/values[i]};
        }
        int curr=1;
        while(!q.empty()){
            auto f=q.front();
            q.pop();
            vector<string>x=f.first;
            int i=f.second;
            if(!mp.count(x[0]) && !mp.count(x[1])){
                mp[x[0]]={curr,values[i]};
                mp[x[1]]={curr,1};
                curr++;
            }
            else if(!mp.count(x[0]))
                mp[x[0]]={mp[x[1]].first, values[i] * mp[x[1]].second};
            else if(!mp.count(x[1]))
                mp[x[1]]={mp[x[0]].first, mp[x[0]].second/values[i]};
        }
        vector<double>res;
        for(auto x:queries)
            if(mp.count(x[0]) && mp.count(x[1]) && mp[x[1]].first == mp[x[0]].first)
                res.push_back(mp[x[0]].second/mp[x[1]].second);
            else
                res.push_back(-1);
        return res;
    }
};
