# 0697 - Degree of an Array

## 🧠 Idea  
The task is to find the shortest contiguous subarray whose **degree** is equal to the degree of the entire array.

The degree of an array = **the maximum frequency of any element**.

The core idea can be divided into two steps:

1. **Iterate through the array to count the frequency of each element, while recording its first and last occurrence indices.**
2. **For all elements whose frequency equals the maximum degree, compute the length of their subarray**  
   → Subarray length = `last_index - first_index + 1`

Take the minimum length among these candidates as the answer.

---

## 🛠️ Key Points

- Use three `unordered_map`s:
  - `count[x]`: frequency of element `x`
  - `first[x]`: first occurrence index of `x`
  - `last[x]`: last occurrence index of `x`
- Single pass to gather all information:
  - If `x` appears for the first time → record `first[x]`
  - Each time `x` appears → update `last[x]` and `count[x]`
  - Maintain the global maximum degree `degree`
- Iterate over `count`:
  - For all elements where `count[x] == degree`, compute the subarray length
  - Take the minimum as the result

This process is **two linear passes**, fully O(n).

---

## 💡 Intuition

The degree is determined by the element(s) with the highest frequency.  
To include all occurrences of such an element in a subarray, the subarray must span from its **first occurrence** to its **last occurrence**.

Therefore, for each “degree contributor,” the shortest subarray containing all its occurrences is already determined.

We just need to choose the shortest one.

This approach avoids complicated sliding window or brute-force subarray checks—three hash maps suffice.

---

## ⏱️ Complexity

- **Time:** `O(n)`  
  Two linear passes: one for counting, one for finding the shortest subarray.
- **Space:** `O(n)`  
  In the worst case, all elements are stored in `first/last/count` maps.
