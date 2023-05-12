class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r,d;
        int n=senate.size();
        string ans="";
        for(auto i=0;i<n;i++){
            if(senate[i]=='R') r.push(i);
            else d.push(i);
        }
        while(1){
            if(r.empty() && !d.empty()){
                ans="Dire";
                break;
            }
            if(!r.empty() && d.empty()){
                ans="Radiant";
                break;
            }

            int r_index=r.front();//First index of queue r
            int d_index=d.front();//First index of queue d
            r.pop();
            d.pop();
            //Removed both and push only one to any one of queue
            int min_index=min(r_index,d_index);
            if(min_index==r_index){
                int temp=r_index+n;
                r.push(temp);//Push r_index+n in queue r
            }else if(min_index==d_index){
                int temp=d_index+n;
                d.push(temp);//Push d_index+n in queue d
            }
        }
        return ans;
    }
};
