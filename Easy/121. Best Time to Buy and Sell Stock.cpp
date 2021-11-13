class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int last = prices[n-1];
        int ans =0;
        int res = 0;
        for(int i=n-2; i>=0; i--) {
            if(prices[i]<last) {
                res = last - prices[i];
            }else{
                last = prices[i];
            }
            ans = max(res, ans);
        }
        
        return ans;
    }
};