//
//  Design Linked List.cpp
//  Algorithm
//
//  Created by 李展 on 2019/3/4.
//  Copyright © 2019 JohnLee. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
class MyLinkedList {
private:
    ListNode *head;
    ListNode *tail;
    int size;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }
        ListNode *cur = head;
        for (int i = 0; i < index; i++) {
            cur = cur->next;
        }
        return cur->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        ListNode *node = new ListNode(val);
        node->next = head;
        head = node;
        if (size == 0) {
            tail = node;
        }
        size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode *node = new ListNode(val);
        if (size == 0) {
            head = node;
        } else {
            tail->next = node;
        }
        tail = node;
        size++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size){
            return;
        } else {
            if (index == 0) {
                addAtHead(val);
            } else if (index == size) {
                addAtTail(val);
            }
            else {
                ListNode *cur = head;
                for (int i = 0; i < index-1; i++) {
                    cur = cur->next;
                }
                ListNode *node = new ListNode(val);
                ListNode *next= cur->next;
                cur->next = node;
                node->next = next;
                size++;
            }
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        } else {
            if (index == 0) {
                ListNode *tmp = head;
                head = head->next;
                delete tmp;
            } else {
                ListNode *cur = head;
                for (int i = 0; i < index-1; i++) {
                    cur = cur->next;
                }
                ListNode *tmp = cur->next;
                ListNode *next = tmp->next;
                if (next == nullptr) {
                    tail = cur;
                }
                delete tmp;
                cur->next = next;
            }
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
