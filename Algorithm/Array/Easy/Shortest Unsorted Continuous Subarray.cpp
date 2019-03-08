//
//  Shortest Unsorted Continuous Subarray.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/21.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int flag = 0;
        int begin = 0,end = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i-1]) {
                begin = i - 1;
                flag = 1;
                break;
            }
        }
        if (!flag) {
            return 0;
        }
        for (int i = nums.size()-1; i > 0; i--) {
            if (nums[i-1] >= nums[i]) {
                end = i;
                break;
            }
        }
        if (end != 0) {
            return end - begin + 1;
        }
        return 0;
    }
};

//sort
//class Solution {
//public:
//    int findUnsortedSubarray(vector<int>& nums) {
//        vector<int> n(nums.size());
//        for (int i =0; i<nums.size(); i++) {
//            n[i] = nums[i];
//        }
//        int front = 0,rear=0;
//        sort(n.begin(), n.end());
//        for (int i =0; i<nums.size(); i++) {
//            if (n[i]!=nums[i]) {
//                front = i;
//                break;
//            }
//        }
//        for (int i=nums.size()-1; i>=0; i--) {
//            if (n[i]!=nums[i]) {
//                rear = i;
//                break;
//            }
//        }
//        if(!rear && !front) return 0;
//        return  rear-front+1;
//    }
//};
