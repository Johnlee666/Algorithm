//
//  Best Time to Buy and Sell Stock.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/28.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) {
            return 0;
        }
        int minprice = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minprice) {
                minprice = prices[i];
            } else {
                if (prices[i] - minprice > maxProfit) {
                    maxProfit = prices[i] - minprice;
                }
            }
        }
        return maxProfit;
    }
};
