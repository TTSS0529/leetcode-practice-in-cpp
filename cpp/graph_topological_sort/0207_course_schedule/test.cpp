#include "course_schedule.hpp"

static void runTest(int numCourses, vector<vector<int>>& prerequisites) {
    Solution    sol;
    cout << (sol.canFinish(numCourses, prerequisites) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1 = {
        {1, 0}
    };
    runTest(2, test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test2 = {
        {1, 0},
        {0, 1}
    };
    runTest(2, test2);

    return 0;
}