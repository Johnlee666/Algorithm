//
//  Reverse Integer.cpp
//  LeetCode
//
//  Created by 李展 on 2019/2/11.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
using namespace std;
//class Solution {
//public:
//    int reverse(int x) {
//        int flag = 0;
//        if (x < 0) {
//            if (-x > __INT_MAX__) {
//                return 0;
//            }
//            x = -x;
//            flag = 1;
//        } else {
//            flag = 0;
//        }
//        long long res = 0;
//        while (x > 0) {
//            long long temp = (x % 10) + res*10;
//            if (temp > __INT_MAX__) {
//                res = 0;
//                break;
//            }
//            res = temp;
//            x = x/10;
//        }
//        if (flag) {
//            res = -res;
//        }
//        return (int)res;
//    }
//};

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && pop > 7)) {
                return 0;
            }
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            rev *= 10;
            rev += pop;
        }
        return rev;
    }
};
