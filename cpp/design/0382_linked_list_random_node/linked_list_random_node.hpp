#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    Solution(ListNode* head);
    int getRandom();
private:
    ListNode    *_head;
};