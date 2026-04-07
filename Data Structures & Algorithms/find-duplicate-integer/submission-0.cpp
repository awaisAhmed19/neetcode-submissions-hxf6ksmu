class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        vector<bool> seen(n,false);

        for(int i=0;i<n+1;i++){
            if(seen[nums[i]]){
                return nums[i];
            }
            seen[nums[i]]=true;
        }
    }
};
