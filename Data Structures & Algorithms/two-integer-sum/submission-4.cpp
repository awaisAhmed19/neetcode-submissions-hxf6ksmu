class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> out;
        
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(out.find(diff)!=out.end()){
                return {out[diff],i};
            }
            out[nums[i]]=i;
        }

        return {};
    }
};
