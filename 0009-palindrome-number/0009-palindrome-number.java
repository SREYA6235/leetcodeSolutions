class Solution {
    public boolean isPalindrome(int x) {
        int s=0;
        int p=x;
        if(x<0)
            return false;
        while(x!=0)
            {
                int temp=x%10;
                s=s*10+temp;
                x=x/10;
                
            }
        if(s==p) 
            return true;
         else 
            return false;
        
    }
}