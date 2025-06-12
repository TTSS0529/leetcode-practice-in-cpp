#include "delete_node_in_a_linked_list.hpp"

void    Solution::deleteNode(ListNode *node) {
    ListNode    *prev = nullptr;
    while (node && node->next) {
        node->val = node->next->val;
        prev = node;
        node = node ->next;
    }
    prev->next = nullptr;
}