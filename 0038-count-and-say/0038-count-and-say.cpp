class Solution {
public:
    string countAndSay(int n) {
        
         string current="1";
     
         for(int i=2;i<=n;i++)
            {
               string nxt="";
               int c=1;
               for(int j=0;j<current.size();j++)
                  {
                    if(current[j]==current[j+1] && j+1 <current.size())
                    {
                        c++;
                    }
                    else
                    {
                        nxt +=to_string(c) + current[j];
                        c=1;
                    }
                  }
                  current=nxt;
            }
        return current;
    }
};