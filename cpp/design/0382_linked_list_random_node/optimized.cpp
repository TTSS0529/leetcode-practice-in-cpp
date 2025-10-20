#include "linked_list_random_node.hpp"

Solution::Solution(ListNode* head) : _head(head) {
}

int Solution::getRandom() {
    int res = _head->val, i = 2;
    ListNode    *node = _head->next;
    while (node) {
        if (rand() % i == 0) {
            res = node->val;
        }
        ++i;
        node = node->next;
    }
    return res;
}