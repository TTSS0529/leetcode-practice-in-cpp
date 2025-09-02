# 0605 - Can Place Flowers

## 🧠 Idea  

We are asked to check if we can **plant `n` new flowers** in a flowerbed (represented as an array of `0` and `1`),  
such that **no two flowers are adjacent**.  

- `flowerbed[i] == 0` means the spot is empty.  
- `flowerbed[i] == 1` means there is already a flower.  
- Constraint: no two `1`s can be next to each other.  

So the problem reduces to:  
👉 **Check if there are at least `n` valid empty spots where flowers can be placed without breaking the rule.**

---

## 🔁 Step-by-step  

1. Iterate through each position `i` in `flowerbed`.  
2. If `flowerbed[i] == 0`:  
   - Check the **left neighbor**: either `i == 0` (first position) OR `flowerbed[i-1] == 0`.  
   - Check the **right neighbor**: either `i == len-1` (last position) OR `flowerbed[i+1] == 0`.  
3. If both left & right are empty, we can safely plant a flower at `i`:  
   - Set `flowerbed[i] = 1`  
   - Decrease `n` by 1  
4. If at any point `n == 0`, return `true`.  
5. If loop ends and `n > 0`, return `false`.  

---

## 🛠️ Key Points  

- We **greedily plant** a flower as soon as we find a valid spot.  
- Checking left/right boundaries requires care (`i == 0` or `i == len-1`).  
- Early stopping (`if (n == 0) return true;`) improves efficiency.  

---

## ⏱️ Complexity  

- **Time:** `O(n)` → iterate through `flowerbed`.  
- **Space:** `O(1)` → in-place modification.  
