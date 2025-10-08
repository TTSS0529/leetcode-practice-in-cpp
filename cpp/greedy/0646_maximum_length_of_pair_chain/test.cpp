#include "maximum_length_of_pair_chain.hpp"

static void runTest(vector<vector<int>>& pairs) {
    Solution    sol;
    cout << sol.findLongestChain(pairs) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{{1,2},{2,3},{3,4}};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{{1,2},{7,8},{4,5}};
    runTest(test2);

    return 0;
}