#include "non_overlapping_intervals.hpp"

static void runTest(vector<vector<int>>& intervals) {
    Solution    sol;
    cout << sol.eraseOverlapIntervals(intervals) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{
        {1,2},{2,3},{3,4},{1,3}
    };
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{
        {1,2},{1,2},{1,2}
    };
    runTest(test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<vector<int>> test3{
        {1,2},{2,3}
    };
    runTest(test3);

    std::cout << ">>>>>> example 4 <<<<<<" << std::endl;
    vector<vector<int>> test4{
        {0,2},{1,3},{2,4},{3,5},{4,6}
    };
    runTest(test4);

    return 0;
}