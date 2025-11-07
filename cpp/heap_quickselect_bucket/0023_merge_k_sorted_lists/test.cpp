#include "merge_k_sorted_lists.hpp"

static void runTest(vector<ListNode*>& lists) {
    Solution    sol;
    ListNode    *res = sol.mergeKLists(lists);
    printLinkedlist(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(1), a2(4), a3(5), b1(1), b2(3), b3(4), c1(2), c2(6);
    a1.next = &a2;a2.next = &a3;
    b1.next = &b2;b2.next = &b3;
    c1.next = &c2;
    vector<ListNode*>   test1;
    test1.push_back(&a1);
    test1.push_back(&b1);
    test1.push_back(&c1);
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    test1.clear();
    runTest(test1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    test1.push_back(nullptr);
    runTest(test1);

    return 0;
}