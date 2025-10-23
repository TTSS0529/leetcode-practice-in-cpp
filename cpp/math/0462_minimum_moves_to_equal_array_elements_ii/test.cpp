#include "minimum_moves_to_equal_array_elements_ii.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.minMoves2(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1, 2, 3};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1, 10, 2, 9};
    runTest(test2);

    return 0;
}