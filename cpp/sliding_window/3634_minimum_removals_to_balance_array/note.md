# 3634 – Minimum Removals to Make Array Balanced

## 🧠 Idea

An array is considered *balanced* if `max ≤ k × min`.  
We want to remove the *minimum* number of elements so that the remaining array is balanced.

After sorting the array, this becomes equivalent to finding the **longest contiguous subarray** such that:
`nums[right] ≤ k × nums[left]`
This can be efficiently solved using a **sliding window (two pointers)** approach.

---

## 🔧 Method

- Sort the array in non-decreasing order.
- Use two indices, `left` and `right`, to maintain a window.
- Increment `right` step-by-step.
- While the current window violates the balance condition, increment `left`.
- Track the maximum window size that satisfies the condition.

---

## 🛠️ Key Points

- Sorting is required to maintain monotonicity inside the window.
- Sliding window guarantees a linear scan after sorting.
- Handle overflow carefully when computing `k × nums[left]`.
- If the array has size `1`, it's always balanced.

---

## ⏱️ Complexity

| Technique              | Time Complexity       | Space Complexity |
|-----------------------|-----------------------|------------------|
| Sort + Sliding Window | `O(n log n)`          | `O(1)`           |

---

## 📌 Alternative (Contest Version)

A binary-search based approach can also be used:
- For each `right`, compute the minimum allowed value (`ceil(nums[right] / k)`).
- Binary-search for the leftmost index with value ≥ that target.
- Compute removals as *elements excluded from this range*.

Both methods operate in `O(n log n)` time.