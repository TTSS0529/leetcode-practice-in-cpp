#include "intersection_of_two_linked_lists.hpp"

ListNode    *Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode    *pA = headA, *pB = headB;
    while (pA != pB) {
        pA = pA ? pA->next : headB;
        pB = pB ? pB->next : headA;
    }
    return pA;
}