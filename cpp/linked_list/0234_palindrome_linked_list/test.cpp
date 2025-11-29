#include "palindrome_linked_list.hpp"

static void runTest(ListNode* head) {
    Solution    sol;
    cout << (sol.isPalindrome(head) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(1), a2(2), a3(2), a4(1);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    runTest(&a1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    b1(1), b2(2);
    b1.next = &b2;
    runTest(&b1);

    return 0;
}