#include "contains_duplicate.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << (sol.containsDuplicate(nums) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1,2,3,1};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1,2,3,4};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{1,1,1,3,3,4,3,2,4,2};
    runTest(test3);

    return 0;
}