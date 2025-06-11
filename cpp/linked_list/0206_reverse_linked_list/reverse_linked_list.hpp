#pragma once

#include <iostream>

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode    *findBeforeLastNode(ListNode *head);// only useful for brute_force version!!
    ListNode    *reverseList(ListNode *head);
};