class WordDictionary {
public:
    vector<WordDictionary*> next;
    bool islast=false;
    WordDictionary(): next(26,nullptr),islast(false) {}
    
    void addWord(string word) {
        WordDictionary* w=this;
        for(char wr:word){
            if(w->next[wr-'a']==nullptr){
                w->next[wr-'a']=new WordDictionary();
            }
            w=w->next[wr-'a'];
        }     
        w->islast=true;
    }
    
    bool search(string word) {
          int i=0;
        return this->dfs(this,word,i);
    }
    bool dfs(WordDictionary* node, string word, int i){
        if(!node) return false;
        if(i==word.size()) return node->islast;
        
        if(word[i]=='.'){
            for(auto c:node->next){
                if(dfs(c,word,i+1)) return true;
            }
            return false;
        }else{
            return dfs(node->next[word[i]-'a'],word,i+1);
        }
    }
};
