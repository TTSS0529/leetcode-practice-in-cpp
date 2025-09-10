#include "search_in_rotated_sorted_array_ii.hpp"

static void runTest(vector<int>& nums, int target) {
    Solution    sol;
    cout << (sol.search(nums, target) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{2,5,6,0,0,1,2};
    runTest(test1, 0);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest(test1, 3);

    return 0;
}