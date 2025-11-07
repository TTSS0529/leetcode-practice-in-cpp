#include "merge_k_sorted_lists.hpp"

ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
    if (lists.empty()) return nullptr;
    auto    comp = [](ListNode *a, ListNode *b) {
        return a->val > b->val;
    };
    priority_queue<ListNode*, vector<ListNode*>, decltype(comp)>    q(comp);
    for (ListNode *list : lists) {
        if (list) q.push(list);
    }
    ListNode    dummy(0), *tail = &dummy;
    while (!q.empty()) {
        tail->next = q.top();
        q.pop();
        tail = tail->next;
        if (tail->next) q.push(tail->next);
    }
    return dummy.next;
}