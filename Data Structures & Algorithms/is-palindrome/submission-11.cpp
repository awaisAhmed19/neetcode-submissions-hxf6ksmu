class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        string a="";
        for(char i:s){
           if(isalnum(i)){
            a+=tolower(i);
           }
        }
        int j=a.size()-1;
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
