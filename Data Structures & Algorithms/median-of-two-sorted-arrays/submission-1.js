class Solution {
    /**
     * @param {number[]} nums1
     * @param {number[]} nums2
     * @return {number}
     */
    findMedianSortedArrays(nums1, nums2) {
        if(nums1.length>nums2.length){
            let temp=[];
            temp=nums1;
            nums1=nums2;
            nums2=temp;
        }
            let tot_el=nums1.length+nums2.length;
            let half=Math.floor((tot_el+1)/2);

            let l=0,h=nums1.length;
            while(l<=h){
                let mid=Math.floor((l+h)/2);
                let other=half-mid;
                let leftA=(mid>0)? nums1[mid-1]:-9999;
                let rightA=(mid<nums1.length)? nums1[mid]:9999;
                let leftB=(other>0)? nums2[other-1]:-9999;
                let rightB=(other<nums2.length)? nums2[other]:9999;
                
                if(leftA <= rightB && leftB <= rightA){
                    if(tot_el%2==1){
                        return Math.max(leftA,leftB);
                    }else{
                        return (Math.max(leftA,leftB)+Math.min(rightA,rightB))/2;
                    }
                } 
                 else if (leftA > rightB) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
    }
}
