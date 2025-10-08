class Solution {
    public int lengthOfLongestSubstring(String s) {
        
    Set<Character>set=new HashSet<>();
        int max=0;
        int  l=0;
        for(int r=0;r<s.length();r++)
            {
            char ch=s.charAt(r);
                         while(set.contains(ch))
                             {
                                 set.remove(s.charAt(l));
                                 l++;
                             }
                set.add(ch);
                int  cu=r-l+1;
                max=Math.max(max,cu);
            }
        return  max; 
        
                    
             

        
    }
}