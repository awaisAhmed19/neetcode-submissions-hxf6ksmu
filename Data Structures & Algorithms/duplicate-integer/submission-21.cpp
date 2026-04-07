class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> a;
        for (int v:nums){
            a.insert(v);
        }
        if(a.size()!=nums.size()){
            return true;
        }
        return false;
    }
};