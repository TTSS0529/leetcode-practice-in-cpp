#include "hexadecimal_and_hexatrigesimal_conversion.hpp"

string  Solution::concatHex36(int n) {
    long long a = 1LL * n * n;
    long long b = 1LL * n * n * n;
    string triBase("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    if (a == 0 && b == 0) return "00";
    string result;
    while (a > 0) {
        result.push_back(triBase[a % 16]);
        a /= 16;
    }
    reverse(result.begin(), result.end());
    string  tmp;
    while (b > 0) {
        tmp.push_back(triBase[b % 36]);
        b /= 36;
    }
    reverse(tmp.begin(), tmp.end());
    return result + tmp;
}