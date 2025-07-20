#include "split_array_by_prime_indices.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.splitArray(nums) << endl;
}

int main() {
	std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {2, 3, 4};
    runTest(test1);

	std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {-1, 5, 7, 0};
    runTest(test2);

    return 0;
}