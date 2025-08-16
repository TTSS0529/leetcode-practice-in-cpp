#include "minimum_sensors_to_cover_grid.hpp"

static void runTest(int n, int m, int k) {
    Solution    sol;
    cout << sol.minSensors(n, m, k) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(5, 5, 1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(2, 2, 2);

    return 0;
}