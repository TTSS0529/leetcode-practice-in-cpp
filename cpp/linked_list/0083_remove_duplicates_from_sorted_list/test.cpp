#include "remove_duplicates_from_sorted_list.hpp"

static void runTest(ListNode* head) {
    Solution    sol;
    ListNode    *res = sol.deleteDuplicates(head);
    printLinkedlist(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(1), a2(1), a3(2);
    a1.next = &a2;
    a2.next = &a3;
    runTest(&a1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    b1(1), b2(1), b3(2), b4(3), b5(3);
    b1.next = &b2;
    b2.next = &b3;
    b3.next = &b4;
    b4.next = &b5;
    runTest(&b1);

    return 0;
}