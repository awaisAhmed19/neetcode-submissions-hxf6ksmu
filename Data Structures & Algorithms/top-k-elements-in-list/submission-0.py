class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq={}
        for i in nums:
            if i in freq:
                freq[i]+=1
            else: 
                freq[i]=1
        count=[[] for i in range(len(nums)+1) ]

        for i,j in freq.items():
            count[j].append(i)

        res=[]
        for i in range(len(count)-1,0,-1):
            for n in count[i]:
                res.append(n)
                if len(res)==k:
                    return res
    