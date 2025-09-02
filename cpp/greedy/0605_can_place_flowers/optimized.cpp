#include "can_place_flowers.hpp"

bool Solution::canPlaceFlowers(vector<int>& flowerbed, int n) {
    int len = flowerbed.size();
    if (n == 0) return true;
    for (int i = 0; i < len; ++i) {
        if (flowerbed[i] == 0) {
            int left = i == 0 || flowerbed[i - 1] == 0;
            int right = i == len - 1 || flowerbed[i + 1] == 0;
            if (left && right) {
                flowerbed[i] = 1;
                --n;
            }
            if (n == 0) return true;
        }
    }
    return false;
}