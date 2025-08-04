# 0011 - Container With Most Water

## 🧠 Idea

Use the **two pointers** technique to find the maximum area between two vertical lines, representing a container that can hold water.

We initialize two pointers:

- `left` at index `0`
- `right` at index `n - 1`

At each step, calculate the area between the two lines at `left` and `right`. Then **move the pointer pointing to the shorter line**, hoping to find a taller line and potentially a larger area.

### Why move the shorter line?

Because the area is limited by the **shorter height**. Moving the longer line inward can only reduce the width without increasing the height, so it **cannot** improve the area.

This strategy is a form of **greedy optimization** within a **two-pointer traversal**.

## 🔁 Step-by-step

1. Start with `left = 0` and `right = height.size() - 1`
2. Compute `area = min(height[left], height[right]) * (right - left)`
3. Update result if current area is larger
4. Move the shorter line inward:
   - If `height[left] < height[right]`, do `++left`
   - Else, do `--right`
5. Repeat until `left >= right`

## 🛠️ Key Points

- **Two pointers moving toward each other**
- Move the pointer pointing to the **shorter height**
- Area is computed using:  
  `area = min(height[left], height[right]) * (right - left)`

## ⏱️ Complexity

- **Time:** O(n) — Each pointer moves at most once per iteration
- **Space:** O(1) — Only a few variables used
