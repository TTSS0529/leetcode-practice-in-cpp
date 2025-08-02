#include "minimum_removals_to_balance_array.hpp"

static void runTest(vector<int>& nums, int k) {
    Solution    sol;
    cout << sol.minRemoval(nums, k) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{2, 1, 5};
    runTest(test1, 2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1, 6, 2, 9};
    runTest(test2, 3);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{4, 6};
    runTest(test3, 2);

    return 0;
}