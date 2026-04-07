class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0, h=nums.size()-1;
        while(l<h){
            int mid=((h+l)>>1);
            
            if(nums[mid]>nums[h]){
                l=mid+1;
            }else{
                h=mid;
            }
        }
        return nums[l];
    }
};
