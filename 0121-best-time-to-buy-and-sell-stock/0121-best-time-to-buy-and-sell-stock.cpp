class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_p=INT_MAX;
        int max_pro=0;
        for(int p :prices)
        {
            min_p=min(min_p,p);
            max_pro=max(max_pro,p-min_p);
        }
        return max_pro;
        
    }
};