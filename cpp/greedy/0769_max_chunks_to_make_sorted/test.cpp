#include "max_chunks_to_make_sorted.hpp"

static void runTest(vector<int>& arr) {
    Solution    sol;
    cout << sol.maxChunksToSorted(arr) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{4,3,2,1,0};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1,0,2,3,4};
    runTest(test2);

    return 0;
}