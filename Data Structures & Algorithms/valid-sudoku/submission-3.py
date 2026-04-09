class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows={i:set() for i in range(0,9)}
        cols={i:set() for i in range(0,9)}
        box={i:set() for i in range(0,9)}
        
        for r in range(0,9):
            for c in range(0,9):
                val=board[r][c]
                boxind=(r//3)*3+(c//3)
                if val==".":
                    continue
                if val in rows[r] or val in cols[c] or val in box[boxind]:
                    return False
                rows[r].add(val)
                cols[c].add(val)
                box[boxind].add(val)
        return True
