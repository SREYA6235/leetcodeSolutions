class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=-1;
        int l=-1;
            int n=nums.size();
                 int   right=n-1;
                 int left=0;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
               {
                f= mid;
                right=mid-1;
               }
            else if( nums[mid]<target)
               {
                left=mid+1;
               }
               else
               {
                right=mid-1;
               }
        }
        left=0;
        right=n-1;
        while(left<=right)
        {
         int mid=left+(right-left)/2;
         if(nums[mid]==target)
           {
            l=mid;
            left=mid+1;
           }
           else if(nums[mid]<target)
           {
            left=mid+1;
           }
           else
           {
            right=mid-1;
           }
        }
        return {f,l};
    }
};