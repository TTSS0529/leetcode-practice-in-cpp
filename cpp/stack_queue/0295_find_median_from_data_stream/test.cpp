#include "find_median_from_data_stream.hpp"

int main() {
    MedianFinder    *test = new MedianFinder();
    test->addNum(1);
    test->addNum(2);
    std::cout << test->findMedian() << std::endl;
    test->addNum(3);
    std::cout << test->findMedian() << std::endl;
    delete test;

    return 0;
}