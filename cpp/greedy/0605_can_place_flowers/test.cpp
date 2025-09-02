#include "can_place_flowers.hpp"

static void runTest(vector<int>& flowerbed, int n) {
    Solution    sol;
    cout << (sol.canPlaceFlowers(flowerbed, n) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1, 0, 0, 0, 1};
    runTest(test1, 1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest(test1, 2);

    return 0;
}