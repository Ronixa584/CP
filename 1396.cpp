class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>in;
    unordered_map<string,pair<int,int>>out;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        in[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto temp=in[id];
        in.erase(id);
        string route=temp.first+"_"+stationName;
        out[route].first+=t-temp.second;
        out[route].second+=1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string route=startStation+"_"+endStation;
        auto temp=out[route];
        return (double)temp.first/temp.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
