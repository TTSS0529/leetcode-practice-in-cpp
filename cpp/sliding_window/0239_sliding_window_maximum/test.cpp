#include "sliding_window_maximum.hpp"

static void runTest(std::vector<int>& nums, int k) {
    Solution    sol;
    std::vector<int>    result = sol.maxSlidingWindow(nums, k);
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    std::vector<int>    test1 = {1, 3, -1, -3, 5, 3, 6, 7};
    runTest(test1, 3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    std::vector<int>    test2 = {1};
    runTest(test2, 1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    std::vector<int>    test3 = {-7, -8, 7, 5, 7, 1, 6, 0};
    runTest(test3, 4);

    return 0;
}