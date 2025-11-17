# 0149 - Max Points on a Line

## 🧠 Idea
We need to find the **maximum number of points that lie on the same straight line**.

For each point, treat it as an **anchor** and compute slopes formed with all other points.  
Points that share the same slope with respect to the anchor lie on the same line.

Special cases must also be handled:
- **Duplicate points**
- **Vertical lines** (undefined slope)

---

## 🛠️ Key Points
- For each anchor point `i`, use a hash map to count all slopes with other points.
- `same` counts all points **identical** to the anchor.
- `same_y` counts points with the **same y-coordinate**.
- General case:
  - Compute `dx` and `dy`, use `dx / dy` (double) as the slope key.
- After finishing all comparisons for point `i`, update the global maximum.
- Clear the hash map before moving to the next anchor.

---

## 💡 Intuition
For each point, other points define different "directions" (slopes).

- **Same slope** → lie on the same straight line  
- **Duplicate points** → should be added to every slope count  
- **Horizontal lines** → captured by `same_y`

This converts the geometry problem into counting frequency of slopes.

---

## ⏱️ Complexity
- **Time:** `O(n²)`  
- **Space:** `O(n)`  
