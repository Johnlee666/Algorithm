//
//  Delete Node in a Linked List.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/20.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node && node->next){   // make sure existance
            // tmp pointer point to next
            ListNode* tmp = node->next;
            // borrow value from next
            node->val = node->next->val;
            // delete operation
            node->next = node->next->next;
            // prevent memory leak
            delete tmp;
        }
    }
};
