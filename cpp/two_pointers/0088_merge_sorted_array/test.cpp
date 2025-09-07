#include "merge_sorted_array.hpp"

static void runTest(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    Solution    sol;
    sol.merge(nums1, m, nums2, n);
    printVec(nums1);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> nums1{1, 2, 3, 0, 0, 0}, nums2{2, 5, 6};
    runTest(nums1, 3, nums2, 3);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    nums1 = {1};
    nums2 = {};
    runTest(nums1, 1, nums2, 0);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    nums1 = {0};
    nums2 = {1};
    runTest(nums1, 0, nums2, 1);

    return 0;
}