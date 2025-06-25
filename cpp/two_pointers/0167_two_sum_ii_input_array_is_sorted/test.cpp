#include "two_sum_ii_input_array_is_sorted.hpp"

static void runTest(std::vector<int>& numbers, int target) {
    Solution    sol;
    std::vector<int>    result = sol.twoSum(numbers, target);
    std::cout << "[";
    for (const auto& n : result) {
        std::cout << n;
        if (n != result[result.size() - 1]) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    std::vector<int>    numbers = {2, 7, 11, 15};
    runTest(numbers, 9);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    numbers = {2, 3, 4};
    runTest(numbers, 6);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    numbers = {-1, 0};
    runTest(numbers, -1);

    return 0;
}