class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        tf={}
        for i in nums:
            tf[i]=tf.get(i,0)+1
        buff=dict(sorted(tf.items(),key=lambda item:item[1],reverse=True))
        output=list(buff.keys())
        # print(sorted(tf.items(),reverse=True))
        return output[0:k]