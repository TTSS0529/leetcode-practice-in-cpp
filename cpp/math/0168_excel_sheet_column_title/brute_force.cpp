#include "excel_sheet_column_title.hpp"

string Solution::convertToTitle(int columnNumber) {
    const string    base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string  res;
    while (columnNumber) {
        res += base[(columnNumber - 1) % 26];
        columnNumber = (columnNumber - 1) / 26;
    }
    reverse(res.begin(), res.end());
    return res;
}