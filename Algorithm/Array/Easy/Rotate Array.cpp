//
//  Rotate Array.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/23.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int count = 0;
        for (int start = 0; count < nums.size(); start++) {
            int current = start;
            int prev = nums[start];
            do {
                int next = (current + k) % nums.size();
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;
                current = next;
                count++;
            } while (start != current);
        }
    }
};

//class Solution {
//public:
//    void rotate(vector<int>& nums, int k) {
//        reverse(nums.begin(), nums.end());
//        reverse(nums.begin(), nums.begin()+k);
//        reverse(nums.begin()+k, nums.end());
//    }
//};
