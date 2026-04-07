class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        output=[]
        for i in range(0,len(nums)-1):
            for j in range(0,len(nums)-i-1):
                if (nums[i]+nums[j+i+1])==target:
                    output.append(i)
                    output.append(j+i+1)
                    return output