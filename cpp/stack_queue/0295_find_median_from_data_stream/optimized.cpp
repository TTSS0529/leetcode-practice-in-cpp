#include "find_median_from_data_stream.hpp"

MedianFinder::MedianFinder() {
}

void MedianFinder::addNum(int num) {
    if (_maxHeap.empty() || num <= _maxHeap.top()) {
        _maxHeap.push(num);
    } else {
        _minHeap.push(num);
    }
    if ( _maxHeap.size() > _minHeap.size() + 1) {
        _minHeap.push(_maxHeap.top());
        _maxHeap.pop();
    } else if (_minHeap.size() > _maxHeap.size() + 1) {
        _maxHeap.push(_minHeap.top());
        _minHeap.pop();
    }
}

double MedianFinder::findMedian() {
    if (_maxHeap.size() == _minHeap.size()) {
        return (static_cast<double>(_maxHeap.top()) + _minHeap.top()) / 2.0;
    } else if (_maxHeap.size() > _minHeap.size()) {
        return static_cast<double>(_maxHeap.top());
    } else {
        return static_cast<double>(_minHeap.top());
    }
}