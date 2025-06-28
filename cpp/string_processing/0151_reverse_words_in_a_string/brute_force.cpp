#include "reverse_words_in_a_string.hpp"

std::string Solution::reverseWords(std::string s) {
    auto    end = s.find_last_not_of(" ");
    auto    begin = s.find_last_of(" ", end);
    std::string result;
    while (begin != std::string::npos) {
        result += s.substr(begin + 1, end - begin);
        end = s.find_last_not_of(" ", begin);
        if (end != std::string::npos) {
            result += " ";
        } else {
            return result;
        }
        begin = s.find_last_of(" ", end);
    }
    result += s.substr(0, end + 1);
    return result;
}