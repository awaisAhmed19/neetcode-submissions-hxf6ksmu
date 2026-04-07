class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> res;
        int l=0;
        int ret=0;
        for (int r=0;r<s.size();r++){
            while(res.find(s[r])!=res.end()){
                res.erase(s[l]);
                l++;
            }
            res.insert(s[r]);
            ret=max(ret,r-l+1);
        }
        return ret;
    }
};
