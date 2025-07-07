#include "find_pivot_index.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.pivotIndex(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {1, 7, 3, 6, 5, 6};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {1, 2, 3};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3 = {2, 1, -1};
    runTest(test3);

    return 0;
}