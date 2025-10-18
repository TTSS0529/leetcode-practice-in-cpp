# 0384 - Shuffle an Array

### 🧠 Idea
We need to **implement a class that can reset an array to its original configuration and return a random shuffle of the array**.  
The key requirement is that each permutation of the array should be **equally likely**.  

---

### 🛠️ Key Points
- Store a copy of the **original array** to allow `reset()` to restore it.  
- For shuffling, use the **Fisher-Yates algorithm** to generate a uniform random permutation:  
  1. Iterate from the last element to the first.  
  2. Swap the current element with a randomly chosen element among itself and all previous elements.  
- `reset()` simply returns the stored original array.  
- `shuffle()` returns a **new shuffled array** without modifying the original.

---

### 💡 Intuition
The **Fisher-Yates shuffle** ensures that every element has an equal chance to appear in every position:  
- for i from n-1 to 1: swap(arr[i], arr[random index from 0 to i])
- Swapping from the end avoids bias that would occur if we always swapped forward.  
- Using `rand() % (i+1)` selects a uniform random index among the first `i+1` elements.  

This guarantees that **all n! permutations are equally likely**.

---

### ⏱️ Complexity
- **Time:**  
  - `reset()`: `O(n)` if returning a copy, or `O(1)` if returning the stored reference.  
  - `shuffle()`: `O(n)` — one pass through the array with swaps.  
- **Space:** `O(n)` — store the original array and a copy for shuffling.
