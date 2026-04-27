class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        unordered_map<char,string>map=
           {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
           vector<string>res;
           string current="";
           backtrack(digits,0,map,current,res);
           return res;
    }
    private:
       void backtrack(string &digits,int index,unordered_map<char,string> &map,string &current,vector<string> &res)
       {
       if(index==digits.size())
       {
        res.push_back(current);
        return ;
       }
       string letter=map[digits[index]];
       for(char c:letter)
          {
            current.push_back(c);
            backtrack(digits,index+1,map,current,res);
            current.pop_back();
          }
       }
    
};