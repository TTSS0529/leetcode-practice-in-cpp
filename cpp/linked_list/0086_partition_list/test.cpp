#include "partition_list.hpp"

static void runTest(ListNode *head, int x) {
    Solution    sol;
    ListNode    *result = sol.partition(head, x);
    while (result) {
		std::cout << result->val << " ";
		result = result->next;
	}
	std::cout << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(1), a2(4), a3(3), a4(2), a5(5), a6(2);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    a4.next = &a5;
    a5.next = &a6;
    runTest(&a1, 3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    b1(2), b2(1);
    b1.next = &b2;
    runTest(&b1, 2);

    return 0;
}