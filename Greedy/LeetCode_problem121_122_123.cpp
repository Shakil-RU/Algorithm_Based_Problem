//121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0,ans = 0; int min = prices[0];
        for(int i = 0; i<prices.size(); i++)
        {
            if(min>prices[i])
            {
                min = prices[i];
            }
            profit = prices[i]-min;
            ans = max(ans,profit);
        }
        return ans;
       
    }
};


//122. Best Time to Buy and Sell Stock II
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0 ; 
        for(int i = 0; i<prices.size()-1; i++)
        {
            if(prices[i]<prices[i+1])
            {
                  ans += prices[i+1]-prices[i];
            }
        }
        return ans;
        }
};
