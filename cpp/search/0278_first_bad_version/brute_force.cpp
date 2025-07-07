#include "first_bad_version.hpp"

int Solution::firstBadVersion(int n) {
    int left = 1, right = n;
    while (left < right) {
        int middle = left + (right - left) / 2;
        if (isBadVersion(middle)) {
            if (middle == 1) {
                return 1;
            }
            if (!isBadVersion(middle - 1)) {
                return middle;
            }
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return left;
}