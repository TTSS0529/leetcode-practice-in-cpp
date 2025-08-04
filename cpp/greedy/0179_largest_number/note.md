# 0179 - Largest Number

## 🧠 Idea

Use **custom sorting with a greedy strategy** to arrange the numbers such that their concatenation forms the largest possible number.

The key insight is to compare any two numbers `a` and `b` by comparing the concatenated strings `a + b` and `b + a`.

- If `a + b` is lexicographically greater than `b + a`, then `a` should come before `b`.
- Otherwise, `b` should come before `a`.

This greedy choice ensures that the final concatenation is the maximum possible.

## 🔁 Step-by-step

1. Convert all integers to strings.
2. Sort the strings using a custom comparator:  
   For two strings `a` and `b`, place `a` before `b` if `a + b > b + a`.
3. Handle edge case: if the largest number after sorting is `"0"`, return `"0"`.
4. Concatenate all strings in order to form the result.

## 🛠️ Key Points

- The comparator relies on **string concatenation comparison** (`a + b > b + a`).
- Must convert integers to strings first for easy concatenation and comparison.
- If all numbers are zeros, return `"0"` instead of multiple zeros.
- The approach is a blend of **greedy algorithm** and **custom sorting**.

## ⏱️ Complexity

- **Time:** O(n log n * k), where n is the number of elements and k is the average length of numbers converted to strings (due to string concatenations in comparisons).
- **Space:** O(n * k) for storing string representations.
