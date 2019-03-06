//
//  QuickSort.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/26.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int partition(vector<int>& nums, int left, int right) {
        int p = nums[left];
        while (left < right) {
            while (left < right && nums[right] >= p) {
                right--;
            }
            swap(nums[right], nums[left]);
            while (left < right && nums[left] <= p) {
                left++;
            }
            swap(nums[right], nums[left]);
        }
        return left;
    }
    
    void quickSort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int p = partition(nums, left, right);
            quickSort(nums, left, p-1);
            quickSort(nums, p+1, right);
        }
    }
};
