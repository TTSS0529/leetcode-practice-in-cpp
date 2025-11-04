#include "find_all_numbers_disappeared_in_an_array.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    vector<int> res = sol.findDisappearedNumbers(nums);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{4,3,2,7,8,2,3,1};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1,1};
    runTest(test2);

    return 0;
}