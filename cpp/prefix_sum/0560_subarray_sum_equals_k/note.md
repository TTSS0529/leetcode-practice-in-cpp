# 0560 - Subarray Sum Equals K

## 🧠 Idea  
We need to count how many continuous subarrays sum up to a target value `k`.  
This problem is efficiently solved using **prefix sums** combined with a **hash map** to track how many times each prefix sum has appeared.

---

## 🛠️ Key Points  
- Maintain a running prefix sum as you traverse the array.  
- A subarray has sum `k` if the difference between two prefix sums equals `k`.  
- For each current prefix sum `pre`, we check how many previous prefix sums equal `pre - k`.  
- Use an unordered map to store prefix-sum frequencies.  
- Initialize the map with `0 → 1` to count subarrays starting from index 0.

---

## 💡 Intuition  
Think of prefix sums as checkpoints along a path.  
If two checkpoints differ by exactly `k`, the segment between them forms a valid subarray.  

Rather than checking all possible subarrays (O(n²)), we only track prefix differences, making the solution linear time.  

---

## ⏱️ Complexity  
- **Time:** `O(n)`  
- **Space:** `O(n)`  
