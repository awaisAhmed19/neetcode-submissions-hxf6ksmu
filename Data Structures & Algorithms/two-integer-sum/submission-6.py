class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap={}
        for i in range(0,len(nums)):
            hashmap[nums[i]]=i
        # print(hashmap,hashmap.values(),hashmap.keys())
        for i in range(0,len(nums)):
            diff=target-nums[i]
            if diff in hashmap.keys() and i!=hashmap[diff]:
                # print(diff)
                return [i,hashmap[diff]]
        return []
                
            