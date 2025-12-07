#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    ListNode* sortList(ListNode* head);
private:
    ListNode    *getMid(ListNode *head);
    ListNode    *merge(ListNode *first, ListNode *second);
    ListNode    *merge(ListNode *first, ListNode *second, ListNode *prev);
    ListNode    *split(ListNode *head, int step);
};