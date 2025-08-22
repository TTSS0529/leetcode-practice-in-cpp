#include "search_insert_position.hpp"

static void runTest(vector<int>& nums, int target) {
    Solution    sol;
    cout << sol.searchInsert(nums, target) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1, 3, 5, 6};
    runTest(test1, 5);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(test1, 2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(test1, 7);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    vector<int> test4{2};
    runTest(test4, 1);

    std::cout << ">>>>>>>>>> example 5 <<<<<<<<<<" << std::endl;
    runTest(test4, 5);

    return 0;
}