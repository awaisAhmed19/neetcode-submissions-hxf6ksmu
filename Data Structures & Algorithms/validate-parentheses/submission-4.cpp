class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        for (char c:s){
            if(c=='('||c=='{'||c=='['){
                par.push(c);
            }else{
            if(par.empty()) return false;
            char top=par.top();

            if((c==')'&&top!='(')||(c==']'&&top!='[')||(c=='}'&&top!='{')){
                return false;
            }
            par.pop();
            }
        }
        return par.empty();
    }
};
