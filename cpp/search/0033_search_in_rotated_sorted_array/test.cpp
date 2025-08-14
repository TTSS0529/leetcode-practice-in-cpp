#include "search_in_rotated_sorted_array.hpp"

static void runTest(vector<int>& nums, int target) {
    Solution    sol;
    cout << sol.search(nums, target) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{4, 5, 6, 7, 0, 1, 2};
    runTest(test1, 0);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(test1, 3);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{1};
    runTest(test3, 0);

    return 0;
}