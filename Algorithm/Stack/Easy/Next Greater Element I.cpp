//
//  Next Greater Element I.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/5.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
//Brute Force
//class Solution {
//public:
//    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
//        vector<int> res;
//        for (int i = 0; i < findNums.size(); i++) {
//            int l = findNums[i];
//            int flag = 0;
//            for (int j = 0; j < nums.size(); j++) {
//                if (nums[j] == l) {
//                    for (int k = j+1; k < nums.size(); k++) {
//                        if (nums[k] > l) {
//                            flag = 1;
//                            res.push_back(nums[k]);
//                            break;
//                        }
//                    }
//                    if (flag) {
//                        break;
//                    } else {
//                        res.push_back(-1);
//                    }
//                }
//
//            }
//        }
//        return res;
//    }
//};

//Use Stack
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};
