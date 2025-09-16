#include "kth_largest_element_in_an_array.hpp"

static void runTest(vector<int>& nums, int k) {
    Solution    sol;
    cout << sol.findKthLargest(nums, k) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {3, 2, 1, 5, 6, 4};
    runTest(test1, 2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    runTest(test2, 4);

    return 0;
}