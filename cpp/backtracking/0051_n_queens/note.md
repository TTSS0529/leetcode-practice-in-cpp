# 0051 - N Queens

## 🧠 Idea

Place `n` queens on an `n x n` chessboard so that no two queens attack each other.  
Two queens attack each other if they share the same **column**, **main diagonal (↘)**, or **anti-diagonal (↙)**.

We solve this with **backtracking**:

- Place queens row-by-row.
- For each row, try every column.
- Only place a queen if it doesn't conflict with existing queens.
- Once `n` queens are placed, record the board configuration.

---

## 🔁 Step-by-step

### Brute Force Version
1. Maintain an integer array `pos` where `pos[row] = col` stores the queen’s column in each row.
2. At each row, loop over all columns and check if `(row, col)` is valid by scanning previous rows:
   - Same column: `pos[i] == col`
   - Same main diagonal: `pos[i] - i == col - row`
   - Same anti-diagonal: `pos[i] + i == col + row`
3. If valid, place queen and recurse to the next row.
4. When `row == n`, build the board from `pos` and add it to results.

### Optimized Version
1. Use `vector<bool>` arrays to store usage state:
   - `colUsed[col]` — whether a column is occupied.
   - `diag1Used[row - col + n - 1]` — whether a main diagonal is occupied.
   - `diag2Used[row + col]` — whether an anti-diagonal is occupied.
2. Checking validity becomes **O(1)** instead of scanning previous rows.
3. Maintain `vector<string> board` for current configuration:
   - Place `'Q'` at `(row, col)`, mark `colUsed` and diagonals as `true`.
   - Recurse to `row + 1`.
   - Backtrack: reset `'Q'` to `'.'` and mark usage arrays as `false`.

---

## 🛠️ Key Points

- **Brute Force:** Easy to implement, but each `validPos` call is O(n).
- **Optimized:**  
  - Pre-allocate `board` with `string(n, '.')` to avoid repeated allocations.
  - Use constant-time validity check with three boolean arrays.
  - Diagonal indexing:
    - Main diagonal: `row - col + n - 1` → shift by `n - 1` to avoid negative indices.
    - Anti-diagonal: `row + col`.
- Backtracking ensures only valid boards are generated, no need for extra pruning.

---

## ⏱️ Complexity

- **Time:**  
  - Brute Force: O(n!) in worst case, with O(n) validity check per step.  
  - Optimized: O(n!) with O(1) validity check — significantly faster in practice.
- **Space:** O(n) for recursion stack + O(n²) for storing a single board state.
