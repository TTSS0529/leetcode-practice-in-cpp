# 0769 - Max Chunks To Make Sorted

## 🧠 Idea  
We are given a permutation of numbers from `0` to `n - 1`.  
We need to split the array into the **maximum number of chunks** such that sorting each chunk individually and concatenating them results in a fully sorted array.

---

## 🛠️ Key Points  
- For any position `i`, if the **maximum value** seen so far (`cur_max`) equals `i`,  
  it means all numbers from `0` to `i` are already within this segment.  
- Therefore, we can safely **cut a chunk** here — sorting up to this point will not disturb the global order.  
- Each time this condition holds, increment the chunk count.

---

## 💡 Intuition  
As we traverse the array:
- We track the **largest number** we've encountered so far.  
- When this maximum equals the current index, it indicates that all previous numbers fit perfectly into `[0, i]`.  
- This means everything before `i` can form an independent sorted block.

---

## ⏱️ Complexity  
- **Time:** `O(n)` — single pass to compute `cur_max`.  
- **Space:** `O(1)` — only a few variables used.
