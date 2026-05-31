class Solution {
public:
vector<string>ans;
        void solve(string cu,int open,int close,int n)
        {
            if(cu.length()==n*2)
                  {
                    ans.push_back(cu);
                    return;
                  }
                  if(open<n)
                  {
                    solve(cu+ "(",open+1,close,n);
                  }
                  if(close<open)
                  {
                    solve(cu+ ")",open,close+1,n);
                  }
        }

 
    vector<string> generateParenthesis(int n) {
        solve("",0,0,n);
        return ans;
    }
};
    