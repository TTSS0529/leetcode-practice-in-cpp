#include "copy_list_with_random_pointer.hpp"

Node    *Solution::copyRandomList(Node *head) {
    if (!head) {
        return nullptr;
    }
    Node    *curr = head;
    std::unordered_map<Node *, Node *>  nodePair;
    while (curr) {
        nodePair[curr] = new Node(curr->val);
        curr = curr->next;
    }
    for (curr = head; curr; curr = curr->next) {
        nodePair[curr]->next = nodePair[curr->next];
        nodePair[curr]->random = curr->random ? nodePair[curr->random] : nullptr;
    }
    return nodePair[head];
}