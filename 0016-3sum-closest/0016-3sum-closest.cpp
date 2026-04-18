class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i=0;
        
        sort(nums.begin(),nums.end());
        int clo=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
        int le=i+1;
        int ri=nums.size()-1;
        while(le<ri)
        {

            int sum=nums[i]+nums[le]+nums[ri];
            if(abs(target-sum)<abs(target-clo))
               {
               clo=sum;
               }
               if(sum>target)
               {
                ri--;
               }
               else if(sum<target)
               {
                le++;
               }
                  else
                  {
                    return sum;
                  }
                
        }
        }
        return clo;
        
    }
};