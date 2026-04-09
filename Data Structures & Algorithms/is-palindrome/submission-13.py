class Solution:
    def isPalindrome(self, s: str) -> bool:
        ss=""
        for i in s:
            if i>="a" and i<="z" or i>="A" and i<="Z" or i>="0" and i<="9":
                ss+=i.lower()
            else:
                continue
        print(ss)
        i=0
        j=len(ss)-1
        while i<j:
            if ss[i]!=ss[j]:
                return False
            i+=1
            j-=1
        return True