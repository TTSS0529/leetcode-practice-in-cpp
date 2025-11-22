# 0594 - Longest Harmonious Subsequence

## 🧠 Idea
The task is to find the length of the **longest harmonious subsequence** in an array.  

A harmonious subsequence = a subsequence where **the difference between the maximum and minimum numbers is exactly 1**.

The core idea can be divided into two steps:

1. **Count the frequency of each number in the array using a hash map.**
2. **For each number `num`, check if `num + 1` exists in the map**  
   → If it exists, the length of the harmonious subsequence involving `num` = `count[num] + count[num + 1]`.

Take the maximum length among all such pairs as the answer.

---

## 🛠️ Key Points

- Use a single `unordered_map<int, int>` to store the frequency of each number.
- Iterate through the array once to populate the frequency map.
- Iterate through the map:
  - For each key `num`, if `num + 1` exists → update `res = max(res, count[num] + count[num + 1])`
- No need to check `num - 1` separately, as all pairs are covered.

This approach is a **two linear passes**, fully O(n).

---

## 💡 Intuition

A harmonious subsequence is determined by **two consecutive integers**.  
- Example: if a number `3` appears 4 times and `4` appears 2 times, the subsequence `[3,3,3,3,4,4]` is harmonious with length 6.  
- Only consecutive numbers (`num` and `num+1`) can form a harmonious subsequence.  

Therefore, we just need to **count frequencies** and check adjacent numbers, avoiding the need for sorting or complex subarray scanning.

---

## ⏱️ Complexity

- **Time:** `O(n)`  
  One pass to count frequencies + one pass to check each number → two linear passes.
- **Space:** `O(n)`  
  Storing the frequency of each unique number in a hash map.
