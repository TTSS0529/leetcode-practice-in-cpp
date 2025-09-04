#include "queue_reconstruction_by_height.hpp"

static void runTest(vector<vector<int>>& people) {
    Solution    sol;
    vector<vector<int>> res = sol.reconstructQueue(people);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{
        {7,0},{4,4},{7,1},{5,0},{6,1},{5,2}
    };
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{
        {6,0},{5,0},{4,0},{3,2},{2,2},{1,4}
    };
    runTest(test2);

    return 0;
}