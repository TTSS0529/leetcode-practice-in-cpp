#include "max_points_on_a_line.hpp"

static void runTest(vector<vector<int>>& points) {
    Solution    sol;
    cout << sol.maxPoints(points) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1{{1,1},{2,2},{3,3}};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test2{{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};
    runTest(test2);

    return 0;
}