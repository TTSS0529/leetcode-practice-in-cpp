#include "letter_combinations_of_a_phone_number.hpp"

static void runTest(string digits) {
    Solution    sol;
    vector<string>  res = sol.letterCombinations(digits);
    printVec(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("23");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("2");

    return 0;
}