#include "intersection_of_two_linked_lists.hpp"

ListNode    *Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
    std::unordered_set<ListNode *> match;
    while (headA) {
        match.insert(headA);
        headA = headA->next;
    }
    while (headB) {
        if (match.count(headB)) {
            return headB;
        }
        headB = headB->next;
    }
    return NULL;
}