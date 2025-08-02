#include "earlies_finish_time_for_land_and_water_rides_ii.hpp"

static void runTest(vector<int>& landStartTime, vector<int>& landDuration,
        vector<int>& waterStartTime, vector<int>& waterDuration) {
    Solution    sol;
    cout << sol.earliestFinishTime(landStartTime, landDuration,
        waterStartTime, waterDuration) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> a1{2, 8}, b1{4, 1}, c1{6}, d1{3};
    runTest(a1, b1, c1, d1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> a2{5}, b2{3}, c2{1}, d2{10};
    runTest(a2, b2, c2, d2);

    return 0;
}