#include "swap_nodes_in_pairs.hpp"

static void runTest(ListNode* head) {
    Solution    sol;
    ListNode    *res = sol.swapPairs(head);
    printLinkedlist(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(1), a2(2), a3(3), a4(4);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    runTest(&a1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    ListNode    b1(1);
    runTest(&b1);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    ListNode    c1(1), c2(2), c3(3);
    c1.next = &c2;
    c2.next = &c3;
    runTest(&c1);

    return 0;
}