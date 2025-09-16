# 0075 - Sort Colors

## 🧠 Idea

We are asked to **sort an array consisting of only 0, 1, and 2** in-place **without using library sort**.  

Constraints:  
- `1 <= nums.length <= 3 * 10^4`  
- Only **three possible values**: 0, 1, 2  

**Key insights:**  
- This is also known as the **Dutch National Flag problem**.  
- Maintain **three regions**:
  1. Left part: all 0s  
  2. Middle part: all 1s  
  3. Right part: all 2s  
- Iterate through the array and **swap elements to correct region**.  

---

## 🔁 Step-by-step

1. Initialize pointers:  
   - `left = 0` (next position for 0)  
   - `right = nums.size() - 1` (next position for 2)  
   - `i = 0` (current element)  

2. Iterate while `i <= right`:  
   - If `nums[i] == 0`, swap `nums[i]` with `nums[left]` and move both `i` and `left` forward.  
   - If `nums[i] == 2`, swap `nums[i]` with `nums[right]` and move `right` backward (do not move `i`).  
   - If `nums[i] == 1`, just move `i` forward.  

3. Continue until `i > right`.  

---

## 🛠️ Key Points

- **Single pass** algorithm (`O(n)` time) and **in-place** (`O(1)` space).  
- Swapping ensures that **0s move left** and **2s move right**, 1s naturally stay in the middle.  
- Be careful: after swapping with `right`, **do not increment `i`** because the swapped element needs to be checked.  

---

## ⏱️ Complexity

- **Time:** `O(n)` — each element is checked at most once.  
- **Space:** `O(1)` — no extra space used.  
