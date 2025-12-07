# 0437 - Path Sum III

## 🧠 Idea

We need to find the **number of paths** in a binary tree where the sum of node values equals a given target.  

Key observations:

- **Paths can start and end anywhere** in the tree but must follow the parent → child direction.  
- We can track **prefix sums** while traversing the tree to efficiently count paths ending at the current node.  
- Using a **hash map** to record the frequency of prefix sums, we can determine how many previous paths can form a valid target sum with the current node.

---

## 🔁 Step-by-step

1. **Initialize a hash map** with `map[0] = 1` to account for paths starting at the root.  
2. **Traverse the tree** using DFS.  
3. **Update the current prefix sum** `curr += node->val`.  
4. **Count paths ending at this node**: `map[curr - target]` gives the number of valid paths ending here.  
5. **Increment `map[curr]`** to include the current path.  
6. **Recurse on left and right children**.  
7. **Backtrack** by decrementing `map[curr]` to remove the current node’s sum before returning.  
8. **Return the total count** after traversal.

---

## 🛠️ Key Points

- **Prefix sum approach** avoids repeatedly summing paths from every ancestor — improves efficiency from O(n²) → O(n).  
- **Backtracking** ensures the map only reflects the current path from the root to the current node.  
- **Long long** type is used for `curr` to avoid integer overflow.  
- **DFS roles**:  
  1. Track prefix sums along the path.  
  2. Count valid paths using the hash map.  

---

## ⏱️ Complexity

- **Time:** O(n) — each node visited once.  
- **Space:** O(n) — recursion stack + hash map storing prefix sums.  
