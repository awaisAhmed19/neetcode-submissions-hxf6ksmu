class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        stack<int> s;
        vector<int> output(n,0);

        for(int i=0;i<n;i++){
            while(!s.empty()&& temperatures[i]>temperatures[s.top()]){
                int id = s.top(); s.pop();
                output[id] = i - id;
            }
            s.push(i);
        }
        return output;
    }
};
