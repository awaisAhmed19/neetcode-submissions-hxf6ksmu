class Solution:
    def isPalindrome(self, s: str) -> bool:
        ss=""
        for i in s:
            if i>="a" and i<="z" or i>="A" and i<="Z" or i>="0" and i<="9":
                ss+=i.lower()
            else:
                continue
        
        return ss==ss[::-1]