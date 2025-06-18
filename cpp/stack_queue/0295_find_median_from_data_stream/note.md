# 0295 - Find Median from Data Stream

### 🧠 Idea

Maintain a data structure that supports:
- Fast insertion of integers (`addNum`)
- Efficient retrieval of the median (`findMedian`)

## Brute Force vs Optimized Comparison

| Feature           | Brute Force (Sorted Vector) | Optimized (Two Heaps)     |
|-------------------|-----------------------------|----------------------------|
| Insertion Time    | O(n)                        | O(log n)                   |
| Median Retrieval  | O(1)                        | O(1)                       |
| Data Structure    | `std::vector` + sort        | Two `std::priority_queue` |
| Code Simplicity   | ✅ Very simple              | ❌ Slightly more complex   |
| Real-time Support | ❌ Not suitable             | ✅ Excellent                |
| Space Overhead    | Low                         | Medium (two heaps)         |
| Use Case          | Small inputs, testing       | Large data streams         |
