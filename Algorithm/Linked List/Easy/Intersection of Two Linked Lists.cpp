//
//  Intersection of Two Linked Lists.cpp
//  Algorithm
//
//  Created by 李展 on 2019/2/21.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
//class Solution {
//public:
//    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//        set<ListNode *> set;
//        while (headA) {
//            set.insert(headA);
//            headA = headA->next;
//        }
//        while (headB) {
//            if (set.find(headB) != set.end()) {
//                return headB;
//            }
//            headB = headB->next;
//        }
//        return headA;
//    }
//};


// Two Pointers
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pa = headA;
        ListNode *pb = headB;
        while (pa || pb) {
            if (pa == pb) {
                return pa;
            }
            if (pa == nullptr) {
                pa = headB;
            } else {
                pa = pa->next;
            }
            if (pb == nullptr) {
                pb = headA;
            } else {
                pb = pb->next;
            }
        }
        return pa;
    }
};
