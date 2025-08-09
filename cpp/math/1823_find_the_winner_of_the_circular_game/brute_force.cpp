#include "find_the_winner_of_the_circular_game.hpp"

int Solution::findTheWinner(int n, int k) {
    deque<int>  dq;
    for (int i = 1; i <= n; ++i) {
        dq.push_back(i);
    }
    while (dq.size() != 1) {
        for (int i = 0; i < k; ++i) {
            int tmp = dq.front();
            dq.pop_front();
            if (i != k - 1) {
                dq.push_back(tmp);
            }
        }
    }
    return dq.front();
}