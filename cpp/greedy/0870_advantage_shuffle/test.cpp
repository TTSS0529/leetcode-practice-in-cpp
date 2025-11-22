#include "advantage_shuffle.hpp"

static void runTest(vector<int>& nums1, vector<int>& nums2) {
    Solution    sol;
    vector<int> res = sol.advantageCount(nums1, nums2);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{2,7,11,15}, test2{1,10,4,11};
    runTest(test1, test2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test3{12,24,8,32}, test4{13,25,32,11};
    runTest(test3, test4);

    return 0;
}