#include "palindrome_linked_list.hpp"

bool Solution::isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;
    ListNode    *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverseList(slow->next);
    slow = slow->next;
    while (slow) {
        if (head->val != slow->val) return false;
        slow = slow->next;
        head = head->next;
    }
    return true;
}

ListNode    *Solution::reverseList(ListNode *head) {
    ListNode    *pre = nullptr;
    while (head) {
        ListNode    *next = head->next;
        head->next = pre;
        pre = head;
        head = next;
    }
    return pre;
}