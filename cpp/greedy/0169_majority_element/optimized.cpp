#include "majority_element.hpp"

int Solution::majorityElement(vector<int>& nums) {
    int cnt = 0, maj;
    for (int num : nums) {
        if (!cnt) maj = num;
        if (maj == num) ++cnt;
        else --cnt;
    }
    return maj;
}