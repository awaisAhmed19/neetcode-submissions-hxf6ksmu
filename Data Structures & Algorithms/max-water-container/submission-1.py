class Solution:
    def maxArea(self, heights: List[int]) -> int:
        i=0
        j=len(heights)-1
        maxarea=currarea=0

        while i<j:
            currarea=(j-i)*min(heights[i],heights[j])
            maxarea=max(maxarea,currarea)
            if heights[i]<=heights[j]:
                i+=1
            else:
                j-=1
        return maxarea