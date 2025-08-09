#include "find_the_winner_of_the_circular_game.hpp"

int Solution::findTheWinner(int n, int k) {
    int dp = 0;
    for (int i = 2; i <= n; ++i) {
        dp = (dp + k) % i;
    }
    return dp + 1;
}