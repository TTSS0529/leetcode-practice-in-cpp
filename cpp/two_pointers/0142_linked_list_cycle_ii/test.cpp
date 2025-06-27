#include "linked_list_cycle_ii.hpp"

static void runTest(ListNode *head) {
    Solution    sol;
    ListNode    *result = sol.detectCycle(head);
    if (!result) {
        std::cout << "no cycle" << std::endl;
    } else {
        for (size_t i = 0; head; head = head->next) {
            if (head == result) {
                std::cout << "tail connects to node index " << i << std::endl;
                break ;
            }
            ++i;
        }
    }
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(3), a2(2), a3(0), a4(-4);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    a4.next = &a2;
    runTest(&a1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    b1(1), b2(2);
    b1.next = &b2;
    b2.next = &b1;
    runTest(&b1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    ListNode    c1(1);
    runTest(&c1);

    return 0;
}