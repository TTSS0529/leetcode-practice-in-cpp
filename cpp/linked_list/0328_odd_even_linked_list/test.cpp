#include "odd_even_linked_list.hpp"

static void runTest(ListNode* head) {
    Solution    sol;
    ListNode    *res = sol.oddEvenList(head);
    printLinkedlist(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(1), a2(2), a3(3), a4(4), a5(5);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    a4.next = &a5;
    runTest(&a1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    b1(2), b2(1), b3(3), b4(5), b5(6), b6(4), b7(7);
    b1.next = &b2;
    b2.next = &b3;
    b3.next = &b4;
    b4.next = &b5;
    b5.next = &b6;
    b6.next = &b7;
    runTest(&b1);

    return 0;
}