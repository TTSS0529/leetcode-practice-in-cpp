#include "middle_of_the_linked_list.hpp"

ListNode    *Solution::middleNode(ListNode *head) {
    ListNode    *tail = head, *middle = head;
    int count = 0;
    while (tail) {
        if (count % 2) {
            middle = middle->next;
        }
        tail = tail->next;
        ++count;
    }
    return middle;
}