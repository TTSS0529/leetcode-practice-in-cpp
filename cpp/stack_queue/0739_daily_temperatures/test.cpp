#include "daily_temperatures.hpp"

static void runTest(vector<int>& temperatures) {
    Solution    sol;
    vector<int> res = sol.dailyTemperatures(temperatures);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{73,74,75,71,69,72,76,73};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{30,40,50,60};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{30,60,90};
    runTest(test3);

    return 0;
}