class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> m; 
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        auto& value=m[key];
        int h=value.size()-1, l=0;
        string result;
        while(l<=h){
            int mid=(h+l)>>1;
            if(value[mid].first<=timestamp){
                result=value[mid].second;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return result;
    }
};
