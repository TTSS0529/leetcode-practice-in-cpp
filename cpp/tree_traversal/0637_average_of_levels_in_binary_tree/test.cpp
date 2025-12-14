#include "average_of_levels_in_binary_tree.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    vector<double>  res = sol.averageOfLevels(root);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1{3,9,20,nullopt,nullopt,15,7};
    TreeNode    *root = creatBinaryTree(test1);
    runTest(root);
    freeBinaryTree(root);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2{3,9,20,15,7};
    root = creatBinaryTree(test2);
    runTest(root);
    freeBinaryTree(root);

    return 0;
}