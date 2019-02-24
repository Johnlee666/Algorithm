//
//  Fizz Buzz.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for (int i = 1; i <= n; i++) {
            string str;
            if (i%3 == 0 || i%5 == 0) {
                if (i%3 == 0) {
                    str.append("Fizz");
                }
                if (i%5 == 0) {
                    str.append("Buzz");
                }
            } else {
                str = to_string(i);
            }
            res.push_back(str);
        }
        return res;
    }
};
