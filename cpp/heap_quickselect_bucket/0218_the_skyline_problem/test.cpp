#include "the_skyline_problem.hpp"

static void runTest(vector<vector<int>>& buildings) {
    Solution    sol;
    vector<vector<int>> res = sol.getSkyline(buildings);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1{{2,9,10},{3,7,15},{5,12,12},{15,20,10},{19,24,8}};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test2{{0,2,3},{2,5,3}};
    runTest(test2);

    return 0;
}