#include "three_sum.hpp"

static void runTest(std::vector<int>& nums) {
    Solution    sol;
    std::vector<std::vector<int>>   result = sol.threeSum(nums);
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        auto    num = result[i];
        std::cout << "[";
        for (size_t j = 0; j < num.size(); ++j) {
            auto    n = num[j];
            std::cout << n;
            if (j != num.size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << "]";
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    std::vector<int>    test1 = {-1, 0, 1, 2, -1, -4};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    std::vector<int>    test2 = {0, 1, 1};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    std::vector<int>    test3 = {0, 0, 0};
    runTest(test3);

    return 0;
}