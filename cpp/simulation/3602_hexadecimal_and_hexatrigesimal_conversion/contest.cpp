#include "hexadecimal_and_hexatrigesimal_conversion.hpp"

string  Solution::concatHex36(int n) {
    long long a = n * n;
    long long b = n * n * n;
    string decBase("0123456789ABCDEF");
    string triBase("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string result;
    long long div = 1;
    while (div * 16 <= a) {
        div *= 16;
    }
    while (div > 0) {
        result += decBase[a / div];
        a %= div;
        div /= 16;
    }
    div = 1;
    while (div * 36 <= b) {
        div *= 36;
    }
    while (div > 0) {
        result += triBase[b / div];
        b %= div;
        div /= 36;
    }
    return result;
}