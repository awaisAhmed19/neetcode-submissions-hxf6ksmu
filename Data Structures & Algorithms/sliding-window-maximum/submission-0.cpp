class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<int> window;
        vector<int> result;
        int l=0, r=k;
        while(r<=nums.size()){
            int i=l;
            while(i<r){
                window.push(nums[i]);
                i++;
            }
            result.push_back(window.top());
            l++;
            r++;
            window = priority_queue<int>();
        }
        return result;
    }
};
