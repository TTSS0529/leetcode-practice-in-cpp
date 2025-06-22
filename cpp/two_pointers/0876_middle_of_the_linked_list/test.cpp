#include "middle_of_the_linked_list.hpp"

static void runTest(ListNode *head) {
    Solution    sol;
    ListNode    *result = sol.middleNode(head);
    std::cout << "[";
    while (result) {
        std::cout << result->val;
        if (result->next) {
            std::cout << ",";
        }
        result = result->next;
    }
    std::cout << "]" << std::endl;
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
    ListNode    a6(6);
    a5.next = &a6;
    runTest(&a1);

    return 0;
}