#include "convert_sorted_array_to_binary_search_tree.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    TreeNode    *res = sol.sortedArrayToBST(nums);
    printTreeByLevel(res);
    freeBinaryTree(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{-10, -3, 0, 5, 9};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1, 3};
    runTest(test2);

    return 0;
}