#include "diameter_of_binary_tree.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    cout << sol.diameterOfBinaryTree(root) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1{1,2,3,4,5};
    TreeNode    *root1 = creatBinaryTree(test1);
    runTest(root1);
    freeBinaryTree(root1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2{1,2};
    TreeNode    *root2 = creatBinaryTree(test2);
    runTest(root2);
    freeBinaryTree(root2);

    return 0;
}