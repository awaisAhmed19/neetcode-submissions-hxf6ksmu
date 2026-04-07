class Solution {
    /**
     * @param {number[]} piles
     * @param {number} h
     * @return {number}
     */
    minEatingSpeed(piles, h) {
       
        let low=1;
        let high=Math.max(...piles);

        while(low<=high){
            let mid=Math.floor((high+low)/2);
            let i=0;
            let total=0;
             for (let i = 0; i < piles.length; i++) {
            total += Math.ceil(piles[i] / mid);
        }
            if(total<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;

    }
}
