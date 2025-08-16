#include "number_of_perfect_pairs.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.perfectPairs(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{0, 1, 2, 3};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{-3, 2, -1, 4};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{1, 10, 100, 1000};
    runTest(test3);

    return 0;
}