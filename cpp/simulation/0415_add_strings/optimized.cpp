#include "add_strings.hpp"

std::string Solution::addStrings(std::string num1, std::string num2) {
    std::string result;
    int i = static_cast<int>(num1.size()) - 1;
    int j = static_cast<int>(num2.size()) - 1;
    int carryFlag = 0;
    while (i >= 0 || j >= 0 || carryFlag) {
        int sum = carryFlag;
        if (i >= 0) {
            sum += num1[i--] - '0';
        }
        if (j >= 0) {
            sum += num2[j--] - '0';
        }
        result.push_back(static_cast<char>(sum % 10 + '0'));
        carryFlag = sum / 10;
    }
    std::reverse(result.begin(), result.end());
    return result;
}