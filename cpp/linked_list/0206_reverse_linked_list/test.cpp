#include "reverse_linked_list.hpp"

static void runTest(ListNode *head) {
    Solution    sol;
    ListNode    *result = sol.reverseList(head);
    while (result) {
		std::cout << result->val << " ";
		result = result->next;
	}
	std::cout << std::endl;
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
    ListNode    b1(1), b2(2);
    b1.next = &b2;
    runTest(&b1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    return 0;
}