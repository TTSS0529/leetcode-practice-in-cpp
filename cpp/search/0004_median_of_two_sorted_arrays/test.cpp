#include "median_of_two_sorted_arrays.hpp"

static void runTest(vector<int>& nums1, vector<int>& nums2) {
    Solution    sol;
    cout << sol.findMedianSortedArrays(nums1, nums2) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> a1{1, 3}, b1{2};
    runTest(a1, b1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> a2{1, 2}, b2{3, 4};
    runTest(a2, b2);

    return 0;
}