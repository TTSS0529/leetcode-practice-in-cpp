#include "word_break.hpp"

static void runTest(string s, vector<string>& wordDict) {
    Solution    sol;
    cout << (sol.wordBreak(s, wordDict) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<string>  test1{"leet","code"};
    runTest("leetcode", test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<string>  test2{"apple","pen"};
    runTest("applepenapple", test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<string>  test3{"cats","dog","sand","and","cat"};
    runTest("catsandog", test3);

    return 0;
}