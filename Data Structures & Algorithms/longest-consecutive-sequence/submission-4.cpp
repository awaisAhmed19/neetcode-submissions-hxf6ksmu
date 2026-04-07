class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashset(nums.begin(),nums.end());

        int largest=0;
        for (int n:nums){
            if(hashset.find(n-1)==hashset.end()){
                int cons_n=n;
                int streak=1;
                while(hashset.find(cons_n+1)!=hashset.end()){
                    cons_n+=1;
                    streak+=1;
                }
                largest=max(largest,streak);
            }
        }
        return largest;
    }
};
