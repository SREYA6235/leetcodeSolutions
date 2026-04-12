class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
       
        j=2
        k=[]
        for i in nums:
            c=0
            for j in nums:
              if j<i:
                 c=c+1
            k.append(c)
        return k   

        