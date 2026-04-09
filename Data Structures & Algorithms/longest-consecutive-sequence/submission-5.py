class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numss=set(nums)
        largest =0
        for i in nums:
            if i-1 not in numss:
                consn=i;
                streak=1
                while consn+1 in nums:
                    streak+=1
                    consn+=1
                largest = max(streak,largest)
        return largest