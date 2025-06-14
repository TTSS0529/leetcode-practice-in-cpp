#include "copy_list_with_random_pointer.hpp"

Node    *Solution::copyRandomList(Node *head) {
    if (!head) {
        return nullptr;
    }
    Node    *curr = head;
    while (curr) {
        Node    *tmp = new Node(curr->val);
        tmp->next = curr->next;
        curr->next = tmp;
        curr = tmp->next;
    }
    curr = head;
    while (curr) {
        if (curr->random) {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }
    curr = head;
    Node    dummy(0);
    dummy.next = head->next;
    Node    *tail = head->next;
    while (tail->next) {
        curr->next = curr->next->next;
        tail->next = tail->next->next;
        curr = curr->next;
        tail = tail->next;
    }
    curr->next = nullptr;
    return dummy.next;
}