class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output=[]
        for i in range(0,len(nums)):
            curr=1
            for j in range(0,len(nums)):
                if j==i:
                    pass
                else:
                    curr*=nums[j]
            output.append(curr)
        return output