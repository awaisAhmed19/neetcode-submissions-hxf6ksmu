class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9),cols(9),box(9);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                char val=board[r][c];
                int boxind=(r/3)*3+(c/3);
                if(val=='.') continue;
                if(row[r].count(val)||cols[c].count(val)||box[boxind].count(val)){
                    return false;
                }
                row[r].insert(val);
                cols[c].insert(val);
                box[boxind].insert(val);
            }
        }
        return true;
    }
};
