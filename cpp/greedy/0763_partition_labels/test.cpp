#include "partition_labels.hpp"

static void runTest(string s) {
    Solution    sol;
    vector<int> res = sol.partitionLabels(s);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest("ababcbacadefegdehijhklij");

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest("eccbbbbdec");

    return 0;
}