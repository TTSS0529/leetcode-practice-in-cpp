#include "top_k_frequent_elements.hpp"

static void runTest(vector<int>& nums, int k) {
    Solution    sol;
    vector<int> res = sol.topKFrequent(nums, k);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1,1,1,2,2,3};
    runTest(test1, 2);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{1};
    runTest(test2, 1);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<int> test3{1,2,1,2,1,2,3,1,3,2};
    runTest(test3, 2);

    return 0;
}