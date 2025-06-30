#include "add_strings.hpp"

std::string Solution::addStrings(std::string num1, std::string num2) {
    std::string result;
    int i = static_cast<int>(num1.size()) - 1;
    int j = static_cast<int>(num2.size()) - 1;
    bool    carryFlag = false;
    while (true) {
        if ((i < 0 || j < 0) && !carryFlag) {
            break ;
        }
        int sum = 0;
        if (i >= 0) {
            sum += num1[i] - '0';
            --i;
        }
        if (j >= 0) {
            sum += num2[j] - '0';
            --j;
        }
        sum += static_cast<int>(carryFlag);
        if (sum > 9) {
            carryFlag = true;
            sum -= 10;
        } else {
            carryFlag = false;
        }
        result = static_cast<char>(sum + '0') + result;
    }
    if (i >= 0) {
        result = num1.substr(0, i + 1) + result;
    }
    if (j >= 0) {
        result = num2.substr(0, j + 1) + result;
    }
    return result;
}