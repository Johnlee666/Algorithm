//
//  Min Cost Climbing Stairs.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/28.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size());
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < cost.size(); i++) {
            dp[i] = min(dp[i-1]+cost[i],dp[i-2]+cost[i]);
        }
        return min(dp[cost.size()-1],dp[cost.size()-2]);
    }
};
