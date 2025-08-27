#include "find_minimum_in_rotated_sorted_array.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.findMin(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{3, 4, 5, 1, 2};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{4, 5, 6, 7, 0, 1, 2};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{11, 13, 15, 17};
    runTest(test3);

    return 0;
}