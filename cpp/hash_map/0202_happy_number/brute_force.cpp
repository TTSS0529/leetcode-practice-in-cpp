#include "happy_number.hpp"

bool Solution::isHappy(int n) {
    unordered_set<int>  record;
    record.insert(n);
    while (n != 1) {
        int tmp = 0;
        while (n) {
            tmp += (n % 10) * (n % 10);
            n /= 10;
        }
        n = tmp;
        if (record.count(n)) return false;
        record.insert(n);
    }
    return true;
}