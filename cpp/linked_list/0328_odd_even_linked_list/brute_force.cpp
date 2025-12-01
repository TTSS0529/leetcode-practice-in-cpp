#include "odd_even_linked_list.hpp"

ListNode* Solution::oddEvenList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode    *odd = head, *even = head->next, *even_head = head->next;
    while (even && even->next) {
        odd->next = even->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = even_head;
    return head;
}