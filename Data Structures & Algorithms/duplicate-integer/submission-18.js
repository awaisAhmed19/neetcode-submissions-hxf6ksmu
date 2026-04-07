class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let hash=new Set();
        for(let num of nums ){
            if (hash.has(num)) return true;
            hash.add(num);
        }
        return false;
    }
}
