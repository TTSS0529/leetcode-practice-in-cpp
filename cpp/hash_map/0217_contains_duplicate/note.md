# 0217 - Contains Duplicate

## 🧠 Idea
The task is to determine whether the array contains **any duplicate elements**.

The simplest and most efficient approach is to use an **`unordered_set`** to keep track of all numbers we have seen so far.

While iterating through the array:

- If a number is **already in the set** → we found a duplicate → return `true`
- Otherwise, insert the number into the set and continue

This is a classic **space-for-time** trade-off.

---

## 🛠️ Key Points
- Use `unordered_set` for **average O(1)** lookup and insertion.
- Call `reserve(nums.size())` to avoid unnecessary rehash operations.
- For each number:
  - If `hash.count(num)` is true → duplicate found → return `true`
  - Otherwise insert it into the set.
- If the loop finishes without finding duplicates → return `false`.

---

## 💡 Intuition
A hash set is ideal for quickly checking if an element has appeared before.

Compared to sorting the array first (`O(n log n)`), a hash set allows detecting duplicates in **linear time**:

**Scan → Check → Insert → Continue**  
A clean and efficient strategy.

---

## ⏱️ Complexity
- **Time:** `O(n)`  
  Single pass through the array with O(1) average lookup.
- **Space:** `O(n)`  
  In the worst case, all elements are inserted into the set.
