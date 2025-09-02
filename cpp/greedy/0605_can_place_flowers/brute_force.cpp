#include "can_place_flowers.hpp"

bool Solution::canPlaceFlowers(vector<int>& flowerbed, int n) {
    int len = flowerbed.size();
    if (n == 0) return true;
    if (len == 1) return flowerbed[0] == 0 && n == 1;
    for (int i = 0; i < len && n > 0; ++i) {
        if (flowerbed[i] == 1) continue;
        if (i == 0) {
            if (flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                --n;
            }
        } else if (i == len - 1) {
            if (flowerbed[i - 1] == 0) {
                flowerbed[i] = 1;
                --n;
            }
        } else {
            if (flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0) {
                flowerbed[i] = 1;
                --n;
            }
        }
    }
    return n == 0;
}