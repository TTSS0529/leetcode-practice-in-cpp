#include "find_the_duplicate_number.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.findDuplicate(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {1, 3, 4, 2, 2};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {3, 1, 3, 4, 2};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3 = {3, 3, 3, 3, 3};
    runTest(test3);

    return 0;
}