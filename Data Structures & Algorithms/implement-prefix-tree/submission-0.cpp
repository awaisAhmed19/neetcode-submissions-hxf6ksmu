class PrefixTree {
public:
    vector<PrefixTree*> children;
    bool isleaf;
    PrefixTree() : children(26,nullptr), isleaf(false){}
    
    void insert(string word) {
        PrefixTree* node=this;
        for(char w:word){
            int val=w-'a';
            if(!node->children[val]){
                node->children[val]=new PrefixTree();
            }
            node=node->children[val];
        }
        node->isleaf=true;
    }
    
    bool search(string word) {
        PrefixTree* node=this;
        for(char w:word){
            int val=w-'a';
            if(node->children[val]==nullptr){
                return false;
            }
            node=node->children[val];
        }
        return  node->isleaf;
    }
    
    bool startsWith(string prefix) {

        PrefixTree* node=this;
        for(char w:prefix){
             int val=w-'a';
             if(!node->children[val]){
                return false;
            }
            node=node->children[val];
        }
        return true;
    }
};
