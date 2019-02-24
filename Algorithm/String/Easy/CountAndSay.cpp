//
//  CountAndSay.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/14.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        string prestr = "1";
        string str;
        if (n == 1) return prestr;
        for (int i=2; i <= n; i++){
            int count = 0;
            for (int j = 0; j < prestr.size(); j++){
                count++;
                if (j+1 < prestr.size() && prestr[j] == prestr[j+1])    continue;
                str.push_back('0' + count);
                str.push_back(prestr[j]);
                count = 0;
            }
            prestr = str;
            str.clear();
        }
        
        return prestr;
    }
};
