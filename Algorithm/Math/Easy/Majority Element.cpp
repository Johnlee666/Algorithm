//
//  Majority Element.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/19.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        return nums[nums.size()/2];
//    }
//};

//Bits
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = 0, n = nums.size();
        for (int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
            int bitCounts = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] & mask) bitCounts++;
                if (bitCounts > n / 2) {
                    major |= mask;
                    break;
                }
            }
            if (i == 31) { //To prevent left shift of negative value -2147483648
                break;
            }
        }
        return major;
    }
};

//Boyer-Moore Voting Algorithm
//class Solution {
//public:
//        int majorityElement(vector<int>& nums) {
//        int count = 0;
//        int candidate = 0;
//        for (int num : nums) {
//            if (count == 0) {
//                candidate = num;
//            }
//            count += (num == candidate) ? 1 : -1;
//        }
//        return candidate;
//    }
//};

//Divide and Conquer
//class Solution {
//private:
//    int majorityElementRec(vector<int>& nums, int lo, int hi) {
//        if (lo == hi) {
//            return nums[lo];
//        }
//        int mid = (hi-lo)/2+lo;
//        int left = majorityElementRec(nums, lo, mid);
//        int right = majorityElementRec(nums, mid+1, hi);
//        if (left == right) {
//            return left;
//        }
//        int leftCount = count(nums.begin()+lo, nums.begin()+hi+1, left);
//        int rightCount = count(nums.begin()+lo, nums.begin()+hi+1, right);
//        int res = leftCount>rightCount?left:right;
//        return res;
//    }
//public:
//    int majorityElement(vector<int>& nums) {
//        return majorityElementRec(nums, 0, nums.size()-1);
//    }
//};
