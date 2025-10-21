#include "excel_sheet_column_title.hpp"

static void runTest(int columnNumber) {
    Solution    sol;
    cout << sol.convertToTitle(columnNumber) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(28);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(701);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest(52);

    return  0;
}