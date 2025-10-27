#include "hamming_distance.hpp"

static void runTest(int x, int y) {
    Solution    sol;
    cout << sol.hammingDistance(x, y) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(1, 4);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(3, 1);

    return 0;
}