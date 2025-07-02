#include "zigzag_conversion.hpp"

std::string Solution::convert(std::string s, int numRows) {
    if (numRows < 2 || numRows >= static_cast<int>(s.size()))
        return s;
    std::vector<std::string>    zigzagRows(numRows);
    std::string     finalString;
    finalString.reserve(s.size());
    size_t  i;
    int j, direction = -1;
    for (i = 0, j = 0; i < s.size(); ++i) {
        zigzagRows[j].push_back(s[i]);
        if (j == numRows - 1 || j == 0)
            direction *= -1;
        j += direction;
    }
    for (const auto& line : zigzagRows) {
        finalString += line;
    }
    return finalString;
}