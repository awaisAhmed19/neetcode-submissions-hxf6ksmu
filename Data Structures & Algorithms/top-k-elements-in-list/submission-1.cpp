class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output;
        unordered_map<int, int> buckets;
        int n=nums.size();
        for(auto x:nums){
            buckets[x]++;
        }

        vector<pair<int,int>> pairs(buckets.begin(),buckets.end());

        sort(pairs.begin(),pairs.end(),[](auto &a,auto &b){
            return a.second>b.second;
            });

        for(int i=0;i<k;i++){
            output.push_back(pairs[i].first);
        }
        return output;
    }
};
