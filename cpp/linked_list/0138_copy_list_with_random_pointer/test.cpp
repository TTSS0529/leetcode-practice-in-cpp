#include "copy_list_with_random_pointer.hpp"

static void runTest(Node *head) {
    Solution    sol;
    Node    *result = sol.copyRandomList(head);
    std::unordered_map<Node *, size_t>  outRandom;
    size_t  index = 0;
    Node    *curr = result;
    for (; curr; curr = curr->next, ++index) {
        outRandom[curr] = index;
    }
    std::cout << "[";
    curr = result;
    while (curr) {
        std::cout << "[" << curr->val << ",";
        if (curr->random) {
            std::cout << outRandom[curr->random] << "]";
        } else {
            std::cout << "null]";
        }
        if (curr->next) {
            std::cout << ",";
        }
        curr = curr->next;
    }
    std::cout << "]" << std::endl;
    while (result) {
        Node    *tmp = result;
        result = result->next;
        delete tmp;
    }
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    Node    a1(7), a2(13), a3(11), a4(10), a5(1);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    a4.next = &a5;
    a2.random = &a1;
    a3.random = &a5;
    a4.random = &a3;
    a5.random = &a1;
    runTest(&a1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    Node    b1(1), b2(2);
    b1.next = &b2;
    b1.random = &b2;
    b2.random = &b2;
    runTest(&b1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    Node    c1(3), c2(3), c3(3);
    c1.next = &c2;
    c2.next = &c3;
    c2.random = &c1;
    runTest(&c1);

    return 0;
}