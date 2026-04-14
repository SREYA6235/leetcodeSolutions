class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp={{'I',1},{'V',5},{'X',10},{'L',50},{'D',500},{'C',100},{'M',1000}};
        int sum=0;
        for(int i=0;i<s.size();i++)
           {
            if(i<s.size()-1 && mp[s[i]]<mp[s[i+1]])
            {
                sum-=mp[s[i]];
            }
            else
            {
                sum+=mp[s[i]];
            }

           }
           return sum;

    }
};