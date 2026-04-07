class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {

        if (s.length!==t.length) return false;
        let s_hash={};
        let t_hash={};

        for (let ss of s){
            s_hash[ss]=(s_hash[ss]||0)+1;
        }


        for (let tt of t){
            t_hash[tt]=(t_hash[tt]||0)+1;
        }

        for (let char in s_hash){
            if(s_hash[char]!==t_hash[char]){
                return false;
            }
        }
        return true;
    }
}
