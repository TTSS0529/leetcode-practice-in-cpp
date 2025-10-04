# 0001 - Two Sum

## 🧠 Idea

We need to find **two indices** `i` and `j` such that `nums[i] + nums[j] == target`.  

**Core insight:**  
- This is a **hash map / one-pass solution** problem.  
- Use a map to store numbers we have seen and their indices.  
- For each number `num`, check if `target - num` exists in the map.  
  - If yes → we found the pair.  
  - If no → store `num` in the map and continue.

---

## 🔁 Step-by-step

1. **Initialization**  
   - Create an empty `unordered_map<int, int>` to store number → index mapping.  

2. **Iterate through the array**  
   - For each `nums[i]`:  
     - Compute `tmp = target - nums[i]`.  
     - Check if `tmp` exists in the map:  
       - Yes → return `{map[tmp], i}`.  
       - No → store `nums[i]` in the map: `map[nums[i]] = i`.  

3. **Return**  
   - If no pair is found (should not happen according to problem constraints), return `{-1, -1}`.

---

## 🛠️ Key Points

- **Hash map** lets us check for the complement in `O(1)` time.  
- **One-pass solution** ensures each number is processed only once.  
- **Order of insertion matters:** store the current number *after* checking the map to avoid using the same element twice.  

---

## ⏱️ Complexity

- **Time:** `O(n)`  
  - Each number is visited once, and map lookup is `O(1)` on average.  
- **Space:** `O(n)`  
  - Store all numbers in the map in the worst case.
