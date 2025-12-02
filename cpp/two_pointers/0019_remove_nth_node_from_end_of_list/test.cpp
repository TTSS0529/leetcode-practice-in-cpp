#include "remove_nth_node_from_end_of_list.hpp"

static void runTest(ListNode* head, int n) {
    Solution    sol;
    ListNode    *res = sol.removeNthFromEnd(head, n);
    printLinkedlist(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(1), a2(2), a3(3), a4(4), a5(5);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    a4.next = &a5;
    runTest(&a1, 2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    b1(1);
    runTest(&b1, 1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    ListNode    c1(1), c2(2);
    c1.next = &c2;
    runTest(&c1, 1);

    return 0;
}