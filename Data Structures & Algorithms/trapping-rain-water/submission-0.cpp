
/*
    so to make this work we need a a for loop and two indexes walking form left to right
    and right to left 
    we make a prefix array
    and suffix array for each of the element and get the maximum of the each and then do this 
    formula on each index to find the naximum area 
    area =min(prefixmax[i],suffixmax[i])-height[i]
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int area=0;
        int n=height.size();
        vector<int> prefix(n),suffix(n);
        
        prefix[0]=height[0];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],height[i]);
        }      
        suffix[n-1]=height[n-1];      
        for(int j=n-2;j>=0;j--){
            suffix[j]=max(suffix[j+1],height[j]);
        }         

        for(int k=0;k<n;k++){
            area+=min(prefix[k],suffix[k])-height[k];
        }   

        return area;
    }
};
