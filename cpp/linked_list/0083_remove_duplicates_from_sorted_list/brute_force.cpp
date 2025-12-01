#include "remove_duplicates_from_sorted_list.hpp"

ListNode* Solution::deleteDuplicates(ListNode* head) {
    if (!head) return nullptr;
    ListNode    *curr = head;
    while (curr->next) {
        if (curr->val == curr->next->val) {
            curr->next = curr->next->next;
        } else {
            curr = curr->next;
        }
    }
    return head;
}