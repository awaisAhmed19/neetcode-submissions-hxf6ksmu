class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=1;
        int m= *max_element(piles.begin(),piles.end());
        int low=1,high=m;
        while(low<high){
            int mid=(high+low)>>1;
            int total=0;
            for(int pile:piles){
                total+=((pile+mid-1)/mid);
            }

            if(total<=h){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;

    }
};
