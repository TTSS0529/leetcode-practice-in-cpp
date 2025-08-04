#include "container_with_most_water.hpp"

static void runTest(vector<int>& height) {
    Solution    sol;
    cout << sol.maxArea(height) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1,8,6,2,5,4,8,3,7};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1,1};
    runTest(test2);

    return 0;
}