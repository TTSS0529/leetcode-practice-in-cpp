#include "binary_search.hpp"

static void runTest(vector<int>& nums, int target) {
    Solution    sol;
    cout << "Output: " << sol.search(nums, target) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {-1, 0, 3, 5, 9, 12};
    runTest(test1, 9);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(test1, 2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {5};
    runTest(test2, -5);

    return 0;
}