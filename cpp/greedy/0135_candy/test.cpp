#include "candy.hpp"

static void runTest(vector<int>& ratings) {
    Solution    sol;
    cout << sol.candy(ratings) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1, 0, 2};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1, 2, 2};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{2};
    runTest(test3);

    return 0;
}