#include "letter_combinations_of_a_phone_number.hpp"

vector<string> Solution::letterCombinations(string digits) {
    if (!digits.size()) return {};
    vector<string>  dic{"", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    }, res;
    string  comb;
    backtrack(digits, dic, res, comb, 0);
    return res;
}

void    Solution::backtrack(string& digits, vector<string>& dic, vector<string>& res,
                string& comb, int index) {
    if (comb.size() == digits.size()) {
        res.push_back(comb);
        return;
    }
    string  tmp = dic[digits[index] - '0'];
    for (char c : tmp) {
        comb.push_back(c);
        backtrack(digits, dic, res, comb, index + 1);
        comb.pop_back();
    }
}