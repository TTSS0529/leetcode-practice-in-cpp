#include "longest_word_in_dictionary_through_deleting.hpp"

static void runTest(string s, vector<string>& dictionary) {
    Solution    sol;
    cout << sol.findLongestWord(s, dictionary) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<string>  test1{"ale","apple","monkey","plea"};
    runTest("abpcplea", test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<string>  test2{"a","b","c"};
    runTest("abpcplea", test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest("tsssdfg", test2);

    return 0;
}