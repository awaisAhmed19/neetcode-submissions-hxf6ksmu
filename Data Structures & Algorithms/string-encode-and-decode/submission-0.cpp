class Solution {
public:

    string encode(vector<string>& strs) {
        string output;
        for(auto st:strs){
            int a=st.size();
            for(char c:st){
                output.push_back(c-a);
            }
            output.push_back('#');
        }
        return output;
    }

    vector<string> decode(string s) {
        string ele;
        vector<string> output;
            int count=0,i=0;
            string temp;
            while(i<s.size()){
                if(s[i]!='#'){
                    count++;
                    temp.push_back(s[i]);
                }else{
                    for(auto i:temp){
                        ele.push_back(i+count);
                    }
                    output.push_back(ele);
                    ele="";
                    count=0;
                    temp="";
                }
                i++;
            }
        return output;
        }
};
