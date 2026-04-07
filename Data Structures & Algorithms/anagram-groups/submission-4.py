class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram={}
        for word in strs:
            key = tuple(sorted(word))
            anagram[key]=[]
        for word in strs:
            key = tuple(sorted(word))
            if anagram[key] != []:
                anagram[key].append(word)
            else:
                anagram[key]=[word]
        output=[]
        for k,v in anagram.items():
            output.append(v)
        return output