class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size()-2;i++)
           {
             if(i>0 && nums[i]==nums[i-1])
             {
                continue;
             }
                int le=i+1;
                int ri=nums.size()-1;

            while(le<ri)
                 {
                    
                  int sum=nums[i]+nums[le]+nums[ri];
                    if(sum==0)
                                {
                          vector<int>temp={nums[i],nums[le],nums[ri]};
                          res.push_back(temp);
                          while(le<ri && nums[le]==nums[le+1])
                          {
                            le++;
                          }
                          while(le<ri && nums[ri]==nums[ri-1])
                                {
                                    ri--;
                                }
                          le++;
                          ri--;
                                }
                          else if(sum>0)
                          {
                            ri--;
                          }
                          else
                          {
                            le++;
                          }
                    }
                }     

        return res;
    }
};