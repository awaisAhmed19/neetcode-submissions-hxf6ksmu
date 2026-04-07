class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        vector<int> output;
        int num; 
        while(i<j){
            num=numbers[i]+numbers[j];
            if(num==target){
                output.push_back(i+1);
                output.push_back(j+1);
                return output;
            } else if(num<target){
                i++;

            }else{
                j--;
            }
        }
        return output;
    }
};
