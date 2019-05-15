//
//  Uncommon Words from Two Sentences.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/15.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> res;
        unordered_map<string, int> map;
        istringstream iss(A + " " + B);
        while (iss >> A) {
            map[A]++;
        }
        for (auto w : map) {
            if (w.second == 1) {
                res.push_back(w.first);
            }
        }
        return res;
    }
};
