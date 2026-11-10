class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int lh=0;
        int rh=0;
        int total=0;
        while(left<right)
        {
            if(height[left]<height[right])
            {
            if(height[left]>=lh)
               {
                lh=height[left]; 
               }              
               else
               {
                total+=lh-height[left];
               }
               left++;

        }
        else
        {
            if(height[right]>=rh)
               {
                rh=height[right];
               }
               else
               {
                total+=rh-height[right];
               }
               right--;
        }
        }
        return total;
        
    }
};