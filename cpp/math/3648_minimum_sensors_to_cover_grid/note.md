# 3648 - Minimum Sensors to Cover Grid

## 🧠 Idea

We need to cover an **n × m grid** with the minimum number of sensors.  

- A sensor placed at `(r, c)` covers all cells within **Chebyshev distance ≤ k**.  
- That means it covers a **square of side length `2k + 1`** centered at `(r, c)`.  
- So, each sensor covers a block of size `(2k + 1) × (2k + 1)`.  

The task reduces to:  
👉 **How many such blocks are needed to cover the entire grid?**

---

## 🔁 Step-by-step

1. **Define coverage width**  
   - Each sensor covers a "square width" = `2k + 1`.

2. **Compute sensors needed in one dimension**  
   - Along rows:  
     `ceil(n / width)`  
   - Along columns:  
     `ceil(m / width)`

3. **Total sensors = product of both**  
   - Because we place sensors in a **grid pattern**.  
   - Formula:  
     ```cpp
     ((n + width - 1) / width) * ((m + width - 1) / width)
     ```

---

## 🛠️ Key Points

- **Chebyshev distance** means diagonal moves count the same as horizontal/vertical.  
- So coverage is always a **square**.  
- Using ceiling division ensures even leftover cells are covered.  
- No need for simulation → purely mathematical.

---

## ⏱️ Complexity

- **Time:** O(1) — direct formula calculation.  
- **Space:** O(1) — only variables used.
