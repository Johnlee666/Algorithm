//
//  Sqrt(x).cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//Brute Force
//class Solution {
//public:
//    int mySqrt(int x) {
//        for (int i = 0; i < x; i++) {
//            if (i <= x / i && (i + 1) > x / (i + 1))// Look for the critical point: i*i <= x && (i+1)(i+1) > x
//                return i;
//        }
//        return 0;
//    }
//};

//Binary Search Solution
//class Solution {
//public:
//    int mySqrt(int x) {
//        if (x == 0) return 0;
//        int start = 1, end = x;
//        while (start < end) {
//            int mid = start + (end - start) / 2;
//            if (mid <= x / mid && (mid + 1) > x / (mid + 1))// Found the result
//                return mid;
//            else if (mid > x / mid)// Keep checking the left part
//                end = mid;
//            else
//                start = mid + 1;// Keep checking the right part
//        }
//        return start;
//    }
//};


//Newton Solution
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        long i = x;
        while(i > x / i)
            i = (i + x / i) / 2;
        return (int)i;
    }
};
