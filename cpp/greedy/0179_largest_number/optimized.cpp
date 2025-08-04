#include "largest_number.hpp"

string Solution::largestNumber(vector<int>& nums) {
    vector<string>  vec;
    vec.reserve(nums.size());
    for (int n : nums) {
        vec.push_back(to_string(n));
    }
    sort(vec.begin(), vec.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });
    if (vec[0] == "0") return "0";
    string  res;
    for (const auto& s : vec) {
        res += s;
    }
    return res;
}