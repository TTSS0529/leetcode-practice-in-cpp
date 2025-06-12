#include "delete_node_in_a_linked_list.hpp"

static void runTest(ListNode *head, ListNode *node) {
    Solution    sol;
    sol.deleteNode(node);
    while (head) {
		std::cout << head->val << " ";
		head = head->next;
	}
	std::cout << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(4), a2(5), a3(1), a4(9);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    runTest(&a1, &a2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    b1(4), b2(5), b3(1), b4(9);
    b1.next = &b2;
    b2.next = &b3;
    b3.next = &b4;
    runTest(&b1, &b3);

    return 0;
}