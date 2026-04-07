class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size()==0) return "";

        map<char, int> countT,window;
        for (char c : t){
            countT[c]++;
        }

        int have =0, need=countT.size();
        int res[2]={-1,-1}, resLen=INT_MAX;
        int l=0;
        for(int r=0;r<s.size();r++){
            char c=s[r];
            window[c]++;
            if (countT.find(c)!=countT.end()&& window[c]==countT[c]){
                have++;
            }

            while( have == need){
                if((r-l+1)<resLen){
                    resLen=r-l+1;
                    res[0]=l;
                    res[1]=r;
                }
                window[s[l]]--;
                if (countT.find(s[l])!=countT.end() && window[s[l]]<countT[s[l]]){
                    have--;
                }
                l++;
            }
        }
        int r=res[1];
        l=res[0];
        string result="";
        if(resLen!=INT_MAX){
            for(int i=l;i<r+1;i++){
                result+=s[i];
            }
            return result;
        }
        return result;

    }
};
