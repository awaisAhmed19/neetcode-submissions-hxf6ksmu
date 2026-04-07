class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        map<vector<int>,vector<string>> buff;
        
        for(string s:strs){
            vector<int> freq(26,0);
            for(char c:s){
                freq[c-'a']++;
            }
            buff[freq].push_back(s);
        }

        for(auto &p: buff){
            output.push_back(p.second);
        }
        return output;
    }
};
