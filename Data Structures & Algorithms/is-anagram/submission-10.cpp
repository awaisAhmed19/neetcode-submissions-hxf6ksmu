class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ret1,ret2;

        for(char c:s){
            ret1[c]++;
        }
        for(char c:t){
            ret2[c]++;
        }

        return ret1==ret2;
    }
};
