#include "assign_cookies.hpp"

static void runTest(vector<int>& g, vector<int>& s) {
    Solution    sol;
    cout << sol.findContentChildren(g, s) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> g1{1, 2, 3}, s1{1, 1};
    runTest(g1, s1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> g2{1, 2}, s2{1, 2, 3};
    runTest(g2, s2);

    return 0;
}