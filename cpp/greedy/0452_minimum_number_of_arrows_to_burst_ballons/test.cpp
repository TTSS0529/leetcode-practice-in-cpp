#include "minimum_number_of_arrows_to_burst_ballons.hpp"

static void runTest(vector<vector<int>>& points) {
    Solution    sol;
    cout << sol.findMinArrowShots(points) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{
        {10,16},{2,8},{1,6},{7,12}
    };
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{
        {1,2},{3,4},{5,6},{7,8}
    };
    runTest(test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<vector<int>> test3{
        {1,2},{2,3},{3,4},{4,5}
    };
    runTest(test3);

    return 0;
}