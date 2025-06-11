#include "merge_two_sorted_lists.hpp"

static void runTest(ListNode *list1, ListNode *list2) {
    Solution	sol;
	ListNode	*result = sol.mergeTwoLists(list1, list2);
	while (result) {
		std::cout << result->val << " ";
		result = result->next;
	}
	std::cout << std::endl;
}

int	main() {
	std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
	ListNode	a1(1), a2(2), a3(4);
	a1.next = &a2;
	a2.next = &a3;
	ListNode	b1(1), b2(3), b3(4);
	b1.next = &b2;
	b2.next = &b3;
	runTest(&a1, &b1);

	std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
	runTest(nullptr, nullptr);

	std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
	ListNode	c1;
	runTest(nullptr, &c1);

	return 0;
}