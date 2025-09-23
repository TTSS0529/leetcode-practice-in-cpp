# 0037 - Sudoku Solver  

## 🧠 Idea  

We are asked to **fill a 9x9 Sudoku board** so that each row, column, and 3x3 block contains digits 1–9 exactly once.  

**Key insights:**  
- This is a **backtracking problem**.  
- At each empty cell, we try all valid digits and recurse.  
- Two approaches:  
  1. **Brute-force using `unordered_set`** to track available digits.  
  2. **Optimized using bitmask** to quickly track available digits and pick candidates using bit operations.  

---

## 🔁 Step-by-step  

### Brute-force (`unordered_set`)  
1. Initialize 3 arrays of sets: `row[9]`, `col[9]`, `block[9]` with `{1..9}`.  
2. Scan the board, **erase digits** that are already filled from the corresponding sets.  
3. Record positions of empty cells (`.`).  
4. Call recursive `backtr(board, row, col, block, curr, finish)`:
   - If `curr == 81`, mark `finish = true` and return.  
   - For current empty cell `(x, y)`:
     - Iterate all digits in `row[x] ∩ col[y] ∩ block[b]`.  
     - Place digit, remove it from sets, recurse to next empty cell.  
     - If recursion fails, **backtrack**: remove digit from board and restore sets.  

### Optimized (`bitmask`)  
1. Use `int row[9], col[9], block[9]`, initialize to `0x1FF` (bits 0–8 set → digits 1–9 available).  
2. For each filled cell, **clear the corresponding bit**:  
   ```cpp
   int d = board[i][j] - '1';
   row[i] &= ~(1 << d);
   col[j] &= ~(1 << d);
   block[b] &= ~(1 << d);
3. Record empty positions in `vector<pair<int,int>>` place.
4. In recursive `backtr`:
   - Compute candidate mask: `mask = row[x] & col[y] & block[b]`.
   - While `mask` has bits:
     - `int i = __builtin_ctz(mask);` → pick the least significant available digit.
     - Place digit, toggle the bit off in row[x], col[y], block[b].
     - Recurse to next empty cell.
     - Backtrack by toggling the bit back on.
     - Remove the used bit from mask: `mask &= mask - 1;`.

---

## Key optimizations

- Using bitmask makes intersection and candidate selection **O(1)**.
- `__builtin_ctz(mask)` efficiently finds the first available digit.
- Avoids iterating 1–9 for every empty cell, reducing recursive calls.

---

## 🛠️ Key Points

- **Backtracking:** try → recurse → undo.
- **Block indexing:** `b = x/3*3 + y/3`.
- **Finish flag:** to stop recursion once a valid solution is found.
- **Bitmask operations:**
  - `&` → intersection of available digits.
  - `^=` → toggle bit.
  - `mask & -mask` → isolate lowest set bit (alternative to `__builtin_ctz`).

---

## ⏱️ Complexity

- **Time:** `O(9^m)` in worst case, where `m` is the number of empty cells.
- **Space:**
  - Recursion stack: `O(m)`.
  - Brute-force uses extra sets; bitmask uses `O(9*3)` ints.
