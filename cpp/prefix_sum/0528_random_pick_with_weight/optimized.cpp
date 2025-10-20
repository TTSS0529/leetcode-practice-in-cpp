#include "random_pick_with_weight.hpp"

Solution::Solution(vector<int>& w) : _sums(move(w)) {
    partial_sum(_sums.begin(), _sums.end(), _sums.begin());
}

int Solution::pickIndex() {
    int pos = rand() % _sums.back() + 1;
    return lower_bound(_sums.begin(), _sums.end(), pos) - _sums.begin();
}