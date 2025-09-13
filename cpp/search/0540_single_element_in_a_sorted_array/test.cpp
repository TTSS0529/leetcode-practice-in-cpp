#include "single_element_in_a_sorted_array.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.singleNonDuplicate(nums) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1,1,2,3,3,4,4,8,8};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{3,3,7,7,10,11,11};
    runTest(test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<int> test3{3,3,7};
    runTest(test3);

    return 0;
}