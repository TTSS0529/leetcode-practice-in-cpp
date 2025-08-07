#include "majority_element.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.majorityElement(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{3, 2, 3};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{2, 2, 1, 1, 1, 2, 2};
    runTest(test2);

    return 0;
}