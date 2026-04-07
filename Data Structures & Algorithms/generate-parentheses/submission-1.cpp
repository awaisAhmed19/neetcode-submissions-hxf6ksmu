class Solution {
public:
    void backtrack(int n, int open, int close, vector<string>& output, string& paren){
        if(open==close && open==n){
            output.push_back(paren);
            return;
        }

        if(open < n){
            paren+='(';
            backtrack(n,open+1,close,output,paren);
            paren.pop_back();
        }if(close<open){
            paren+=')';
            backtrack(n,open,close+1,output,paren);
            paren.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> output;
        string paren="";
        backtrack(n,0,0,output,paren);
        return output;
    }
};
