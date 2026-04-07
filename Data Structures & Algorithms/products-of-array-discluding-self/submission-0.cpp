class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {

    vector<int> prefix(nums.size(),1), sufix(nums.size(),1), output;

    for (int i = 1; i < nums.size(); i++) {
      prefix[i]=prefix[i-1]*nums[i-1];
    }
    for (int i = nums.size()-2; i>=0; i--) {
      sufix[i]=sufix[i+1]*nums[i+1];
    }

    for (int i = 0; i < nums.size(); i++) {
      output.push_back(prefix[i] * sufix[i]);
    }
    return output;
  }
};

