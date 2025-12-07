#include "sort_list.hpp"

static void runTest(ListNode* head) {
    Solution    sol;
    ListNode    *res = sol.sortList(head);
    printLinkedlist(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(4), a2(2), a3(1), a4(3);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    runTest(&a1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    b1(-1), b2(5), b3(3), b4(4), b5(0);
    b1.next = &b2;
    b2.next = &b3;
    b3.next = &b4;
    b4.next = &b5;
    runTest(&b1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    return 0;
}