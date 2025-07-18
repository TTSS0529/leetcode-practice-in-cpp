#include "middle_of_the_linked_list.hpp"

ListNode    *Solution::middleNode(ListNode *head) {
    ListNode    *fast = head, *slow = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}