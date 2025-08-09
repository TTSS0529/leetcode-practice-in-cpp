#include "find_the_winner_of_the_circular_game.hpp"

static void runTest(int n, int k) {
    Solution    sol;
    cout << sol.findTheWinner(n, k) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(5, 2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(6, 5);

    return 0;
}