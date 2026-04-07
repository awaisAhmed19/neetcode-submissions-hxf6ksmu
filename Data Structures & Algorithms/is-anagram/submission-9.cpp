class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        vector<int> sr(26,0),tr(26,0);
        for(char i : s){
            sr[i-'a']++;
        }
        for(char j : t){
            tr[j-'a']++;
        }

        return sr==tr;
    }
};
