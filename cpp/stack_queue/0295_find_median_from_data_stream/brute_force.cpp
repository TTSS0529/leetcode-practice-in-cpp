// #include "find_median_from_data_stream.hpp"

// MedianFinder::MedianFinder() {
// }

// void MedianFinder::addNum(int num) {
//     std::vector<int>::iterator  it = std::upper_bound(_data.begin(), _data.end(), num);
//     _data.insert(it, num);
// }

// double MedianFinder::findMedian() {
//     size_t  elementSize = _data.size();
//     if (elementSize % 2) {
//         return static_cast<double>(_data[elementSize / 2]);
//     } else {
//         return ((static_cast<double>(_data[elementSize / 2]) + _data[elementSize / 2 - 1]) / 2.0);
//     }
// }