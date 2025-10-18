#include "shuffle_an_array.hpp"

Solution::Solution(vector<int>& nums) : _origin(move(nums)) {
}

vector<int> Solution::reset() {
    return _origin;
}

vector<int> Solution::shuffle() {
    if (_origin.empty()) return {};
    vector<int> shuffled(_origin);
    for (int i = shuffled.size() - 1; i > 0; --i) {
        swap(shuffled[i], shuffled[rand() % (i + 1)]);
    }
    return shuffled;
}