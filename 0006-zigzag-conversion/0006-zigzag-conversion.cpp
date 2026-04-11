class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>raw(numRows);
        if(numRows==1)
        {
            return s;
        }
           int cu=0;
           bool od=true;
        for(int i=0;i<s.length();i++)
           {
            
            raw[cu]+=s[i];
            if(cu==0)
            {
                od=true;
            }
            else if(cu==numRows-1)
            {
                od=false;
            }
            if(od)
              {
                cu++;
              }
              else
              {
              cu--;
              }
           }
              string result;
              for( string raws:raw)
              {
                        result+=raws;
              }
              return result;

            
    }
};