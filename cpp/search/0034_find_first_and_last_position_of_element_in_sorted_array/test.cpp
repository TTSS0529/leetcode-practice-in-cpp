#include "find_first_and_last_position_of_element_in_sorted_array.hpp"

static void runTest(vector<int>& nums, int target) {
    Solution    sol;
    vector<int> res = sol.searchRange(nums, target);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{5, 7, 7 , 8, 8, 10};
    runTest(test1, 8);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(test1, 6);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{};
    runTest(test3, 0);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    vector<int> test4{2, 2};
    runTest(test4, 3);

    return 0;
}