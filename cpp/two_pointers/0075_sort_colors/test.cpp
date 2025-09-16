#include "sort_colors.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    sol.sortColors(nums);
    printVec(nums);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{2,0,2,1,1,0};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{2,0,1};
    runTest(test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<int> test3{1, 2, 0};
    runTest(test3);

    return 0;
}