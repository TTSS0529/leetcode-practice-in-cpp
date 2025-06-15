# LeetCode 232 - Implement Queue using Stacks

## Approach

This implementation uses **two stacks** (`_first` and `_second`) to simulate a queue (FIFO behavior):

- `push(x)`: Always pushes to `_first` (standard stack behavior).
- `peek()`:
  - If `_second` is not empty, its top is the front of the queue.
  - If `_second` is empty, transfer all elements from `_first` to `_second`, reversing the order.
- `pop()`: Uses `peek()` to ensure `_second` is ready, then pops the front.
- `empty()`: Returns true only if both stacks are empty.

## Time Complexity

- `push`: O(1)
- `pop`: Amortized O(1)
- `peek`: Amortized O(1)
- `empty`: O(1)