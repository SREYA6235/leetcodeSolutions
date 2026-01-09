class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        s=s.lstrip()
        if not s:
            return 0
        sign=1
        i=0
        num=0
        if s[0]=="-":
            sign=-1
            i=i+1
        elif s[0]=="+":
            sign=1
            i=i+1
        while i<len(s) and s[i].isdigit():
            num=num*10+int(s[i])
            i=i+1
        num=num*sign
        min=-2**31
        max=2**31-1
        if num <min:
            return min
        if num >max:
            return max    
        return num  


        