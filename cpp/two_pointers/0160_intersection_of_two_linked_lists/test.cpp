#include "intersection_of_two_linked_lists.hpp"

static void runTest(ListNode *headA, ListNode *headB) {
    Solution    sol;
    int         skipA = 0;
    int         skipB = 0;
    ListNode    *intersec = sol.getIntersectionNode(headA, headB);
    if (intersec) {
        std::cout << "intersecVal: " << intersec->val << std::endl;
    } else {
        std::cout << "No intersection" << std::endl;
    }
    std::cout << "listA=: [";
    ListNode    *copyA = headA;
    ListNode    *copyB = headB;
    while (headA) {
        std::cout << headA->val;
        if (headA->next) {
            std::cout << ",";
        }
        headA = headA->next;
    }
    std::cout << "]" << std::endl;
    std::cout << "listB=: [";
    while (headB) {
        std::cout << headB->val;
        if (headB->next) {
            std::cout << ",";
        }
        headB = headB->next;
    }
    std::cout << "]" << std::endl;
    while (copyA) {
        if (copyA == intersec) {
            break ;
        }
        ++skipA;
        copyA = copyA->next;
    }
    std::cout << "skipA= " << skipA << std::endl;
    while (copyB) {
        if (copyB == intersec) {
            break ;
        }
        ++skipB;
        copyB = copyB->next;
    }
    std::cout << "skipB= " << skipB << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    ListNode    a1(4), a2(1), a3(8), a4(4), a5(5), b1(5), b2(6), b3(1);
    a1.next = &a2;
    a2.next = &a3;
    a3.next = &a4;
    a4.next = &a5;
    b1.next = &b2;
    b2.next = &b3;
    b3.next = &a3;
    runTest(&a1, &b1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    ListNode    c1(1), c2(9), c3(1), c4(2), c5(4), d1(3);
    c1.next = &c2;
    c2.next = &c3;
    c3.next = &c4;
    c4.next = &c5;
    d1.next = &c4;
    runTest(&c1, &d1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    ListNode    e1(2), e2(6), e3(4), f1(1), f2(5);
    e1.next = &e2;
    e2.next = &e3;
    f1.next = &f2;
    runTest(&e1, &f1);
}