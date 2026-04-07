class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> left(n,-1),right(n,n);
        stack<int> stk;

        for (int i=0;i<n;i++){
            while(!stk.empty() && heights[stk.top()] >= heights[i] ){
                right[stk.top()]=i;
                stk.pop();
            }
            if(!stk.empty()){
                left[i]=stk.top();
            }
            stk.push(i);
        }
        int area=0;
        for(int i=0;i<heights.size();i++){
            area=max(heights[i]*(right[i]-left[i]-1),area);
        }
        return area;
    }
};
