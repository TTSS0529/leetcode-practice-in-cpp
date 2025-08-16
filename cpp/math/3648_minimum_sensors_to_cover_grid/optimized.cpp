#include "minimum_sensors_to_cover_grid.hpp"

int Solution::minSensors(int n, int m, int k) {
    int width = 2 * k + 1;
    return ((n + width - 1) / width) * ((m + width - 1) / width);
}