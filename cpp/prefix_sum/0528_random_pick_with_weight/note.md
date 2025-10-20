# 0528 - Random Pick with Weight

### 🧠 Idea
We need to **pick an index randomly, where the probability of each index is proportional to its weight**.  
This means larger weights should have a higher chance of being selected.

---

### 🛠️ Key Points
- Convert the weight array into a **prefix sum array** to represent cumulative probabilities.  
- Generate a random number within the total weight range.  
- Use **binary search** to find which interval (i.e., which index) this random number falls into.  
- The index corresponding to that interval is the randomly chosen one.  

---

### 💡 Intuition
Imagine placing all weights as segments on a continuous number line:  
each segment’s length equals its weight.  
Picking a random point on this line means the chance of landing in a segment  
is directly proportional to that segment’s length — achieving weighted randomness naturally.

---

### ⏱️ Complexity
- **Time:**  
  - `constructor`: `O(n)` — to build prefix sums.  
  - `pickIndex()`: `O(log n)` — to locate with binary search.  
- **Space:** `O(n)` — store prefix sums.
