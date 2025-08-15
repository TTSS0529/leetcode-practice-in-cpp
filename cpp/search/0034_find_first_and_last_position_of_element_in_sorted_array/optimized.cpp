#include "find_first_and_last_position_of_element_in_sorted_array.hpp"

vector<int> Solution::searchRange(vector<int>& nums, int target) {
    vector<int> res(2, -1);
    int len = nums.size();
    if (len == 0) return res;
    int le = 0, ri = len - 1;
    while (le <= ri) {
        int m = le + (ri - le) / 2;
        if (target > nums[m]) le = m + 1;
        else ri = m - 1;
    }
    if (le >= len || nums[le] != target) return res;
    res[0] = le;
    le = 0, ri = nums.size() - 1;
    while (le <= ri) {
        int m = le + (ri - le) / 2;
        if (target >= nums[m]) le = m + 1;
        else ri = m - 1;
    }
    res[1] = le - 1;
    return res;
}