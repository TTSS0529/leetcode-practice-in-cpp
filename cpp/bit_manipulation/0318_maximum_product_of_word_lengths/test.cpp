#include "maximum_product_of_word_lengths.hpp"

static void runTest(vector<string>& words) {
    Solution    sol;
    cout << sol.maxProduct(words) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<string>  test1{"abcw","baz","foo","bar","xtfn","abcdef"};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<string>  test2{"a","ab","abc","d","cd","bcd","abcd"};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<string>  test3{"a","aa","aaa","aaaa"};
    runTest(test3);

    return 0;
}