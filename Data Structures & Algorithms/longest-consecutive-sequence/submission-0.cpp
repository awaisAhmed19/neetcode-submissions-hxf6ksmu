class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashset(nums.begin(),nums.end());
        int largest=0;
        for(int n:nums){
            if(hashset.find(n-1)==hashset.end()){
                int comn=n;
                int currentstreak=1;

                while(hashset.find(comn+1)!=hashset.end()){
                    comn+=1;
                    currentstreak+=1;
                }
                largest=max(largest,currentstreak);
            }
        }
        return largest;
    }
};
