# 0078 - Subsets

## 🧠 Idea

Given a set of distinct integers, generate **all possible subsets** (the power set).  
The solution set **must not contain duplicate subsets**.  

There are two main approaches:

- **Backtracking (DFS):** Recursively decide for each element whether to include it in the current subset.
- **Bit Manipulation:** Treat each subset as a binary number where each bit represents whether an element is included.

---

## 🔁 Step-by-step

### Brute Force Version (Backtracking)

1. Maintain a temporary container to store the current subset.
2. For each recursive call:
   - Add the current subset to the result.
   - Loop over the remaining elements, decide to include each element.
   - Recurse to the next element.
   - Backtrack by removing the last added element.
3. Recursion ends when all elements have been considered.

**Pros:**  
- Intuitive and easy to extend to problems with additional constraints (e.g., subsets with sum = target).  

**Cons:**  
- Each addition to the result involves copying the current subset.  
- Recursion overhead can make it slower in practice.

---

### Optimized Version (Bit Manipulation)

1. Represent each subset as an integer where the binary digits indicate element inclusion.  
2. For each integer from 0 to 2^n - 1:
   - Include elements corresponding to set bits in a temporary container.  
   - Move the temporary container into the result to avoid unnecessary copying.

**Pros:**  
- Extremely fast and memory-efficient.  
- Avoids recursion overhead.  

**Cons:**  
- Less intuitive.  
- Not as flexible for adding extra constraints.

---

## 🛠️ Key Points

- **Backtracking:**  
  - Generates subsets recursively, easy to understand.  
  - Pre-allocate temporary containers to reduce memory reallocations.

- **Bit Manipulation:**  
  - Uses binary representation for subsets.  
  - Efficient and cache-friendly.  
  - Move semantics can minimize copying overhead.

---

## ⏱️ Complexity

- **Time:** O(n * 2^n) for both approaches, since there are 2^n subsets and each can contain up to n elements.  
- **Space:**  
  - Backtracking: O(n * 2^n) for storing results + O(n) recursion stack.  
  - Bit Manipulation: O(n * 2^n) for results + O(n) temporary container.
