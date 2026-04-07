class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> freq1(26, 0), freq2(26, 0);
        
        for (char c : s1) freq1[c - 'a']++;

        int l = 0;
        for (int r = 0; r < s2.size(); r++) {
            freq2[s2[r] - 'a']++;

            // shrink window if it exceeds size of s1
            if (r - l + 1 > s1.size()) {
                freq2[s2[l] - 'a']--;
                l++;
            }

            // compare frequency arrays
            if (freq1 == freq2) return true;
        }
        return false;
    }
};
