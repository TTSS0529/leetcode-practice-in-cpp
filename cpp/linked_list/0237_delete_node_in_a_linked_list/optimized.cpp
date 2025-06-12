#include "delete_node_in_a_linked_list.hpp"

// if you new nodes for your linked list, should delete it
void    Solution::deleteNode(ListNode *node) {
    // ListNode    *toDelete = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    // delete toDelete;
}