#include "word_search.hpp"

static void runTest(vector<vector<char>>& board, string word) {
    Solution    sol;
    cout << (sol.exist(board, word) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<char>>    test1 = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    runTest(test1, "ABCCED");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(test1, "SEE");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(test1, "ABCB");

    return 0;
}