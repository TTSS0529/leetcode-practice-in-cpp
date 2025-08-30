#include "two_letter_card_game.hpp"

static void runTest(vector<string>& cards, char x) {
    Solution    sol;
    cout << sol.score(cards, x) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<string>  test1{"aa", "ab", "ba", "ac"};
    runTest(test1, 'a');

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<string>  test2{"aa", "ab", "ba"};
    runTest(test2, 'a');

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest(test1, 'b');

    return 0;
}