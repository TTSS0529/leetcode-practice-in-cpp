# LeetCode 138: Copy List with Random Pointer

This problem requires deep copying a linked list where each node has a `next` and a `random` pointer.

## 🧪 Three Implementations Compared

| Version             | Time Complexity | Space Complexity | Description                                            |
|---------------------|------------------|-------------------|--------------------------------------------------------|
| `brute_force`       | O(n²)            | O(1)              | Creates new nodes and uses double traversal to set `random` pointers. |
| `optimized_hash`    | O(n)             | O(n)              | Uses a hash map to store old-new node mapping for fast pointer assignment. |
| `optimized_inplace` | O(n)             | O(1)              | Interleaves copied nodes with original list to set pointers without extra space. |