#include "find_minimum_in_rotated_sorted_array_ii.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.findMin(nums) << endl;
}

int main () {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {1, 3, 5};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {2, 2, 2, 0, 1};
    runTest(test2);

    return 0;
}