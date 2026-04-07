class Solution {
public:
    bool isPalindrome(string s) {
        int i,j;
        string a="";
        for (char c:s){
            if(isalnum(c)){
                a+=tolower(c);
            }
        }
        i=0;
        j=a.size()-1;
        while(i<=j){
            if(a[i]!=a[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
