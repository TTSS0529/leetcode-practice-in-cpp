#include "word_ladder_ii.hpp"

static void runTest(string beginWord, string endWord, vector<string>& wordList) {
    Solution    sol;
    vector<vector<string>>  res = sol.findLadders(beginWord, endWord, wordList);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<string>  test1{"hot","dot","dog","lot","log","cog"};
    runTest("hit", "cog", test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<string>  test2{"hot","dot","dog","lot","log"};
    runTest("hit", "cog", test2);

    return 0;
}