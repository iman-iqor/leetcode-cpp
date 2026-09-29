#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minprice=prices[0];
        int maxprofit=0;
        int i=1;
        while(i < prices.size())
        {
            if(minprice > prices[i])
                minprice=prices[i];
            else
            {
                int profit=prices[i]-minprice;
                if(profit>maxprofit)
                    maxprofit=profit;
            }
            i++;
        }
        return maxprofit;
    }
};