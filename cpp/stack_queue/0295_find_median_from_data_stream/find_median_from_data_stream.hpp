#pragma once

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>

class MedianFinder {
public:
    MedianFinder();
    void addNum(int num);
    double findMedian();
private:
    // std::vector<int>    _data;// only for brute_force version
    std::priority_queue<int>    _maxHeap;// only for optimized version
    std::priority_queue<int, std::vector<int>, std::greater<int> >    _minHeap;// only for optimized version
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */