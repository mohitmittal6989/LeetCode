class Solution:
    def reverseWords(self, s: str) -> str:
        lst = s.split()
        lst1=[]
        for i in range(len(lst)-1,-1,-1):
            lst1.append(lst[i])
        
        s1 = " ".join(lst1)

        return s1