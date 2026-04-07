class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int area,res=0;
        while(i<j){
            area=(j-i)*min(heights[i],heights[j]);
            res=max(area,res);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
    return res;
    }
};
