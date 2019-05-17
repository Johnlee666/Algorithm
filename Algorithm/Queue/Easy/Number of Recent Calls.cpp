//
//  Number of Recent Calls.cpp
//  Algorithm
//
//  Created by 李展 on 2019/5/17.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
class RecentCounter {
private:
    queue<int> q;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        int cnt = 1;
        while (!q.empty()) {
            int front = q.front();
            if (t-3000 > front) {
                q.pop();
            } else {
                cnt += q.size();
                break;
            }
        }
        q.push(t);
        return cnt;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
