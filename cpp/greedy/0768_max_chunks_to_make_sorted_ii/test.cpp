#include "max_chunks_to_make_sorted_ii.hpp"

static void runTest(vector<int>& arr) {
    Solution    sol;
    cout << sol.maxChunksToSorted(arr) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{5, 4, 3, 2, 1};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{2, 1, 3, 4, 4};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{1, 1, 2, 1, 1, 3, 4, 5, 1, 6};
    runTest(test3);

    return 0;
}