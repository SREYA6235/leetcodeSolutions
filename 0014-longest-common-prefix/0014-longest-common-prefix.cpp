class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        string pr=strs[0];    

        for(int i=1;i<strs.size();i++)
        {
            while(strs[i].find(pr)!=0)
              {
                pr.pop_back();
              
              if(pr.empty())
              {
                return "";
              }
        }
        }
        return pr;     
        
    }
};