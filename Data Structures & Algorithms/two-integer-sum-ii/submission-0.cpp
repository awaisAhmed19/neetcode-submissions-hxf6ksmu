class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int num=0;
        vector<int> a;
        for (int i=0;i<numbers.size()-1;i++){
            num=(target-numbers[i]);
            for (int j=i+1;j<numbers.size();j++){
                if(num==numbers[j]){
                    a.push_back(i+1);
                    a.push_back(j+1);
                    return a;
                }
            }
        }
    }
};
