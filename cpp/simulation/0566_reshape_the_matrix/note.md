# 0566 - Reshape the Matrix  

## 🧠 Idea  
We are given a matrix `mat` of size `m × n` and two integers `r` and `c`.  
We need to **reshape the matrix** into a new one with size `r × c`, keeping all elements in the same **row-traversal order** as the original matrix.  

If the reshape operation is **not possible** (i.e., `m * n != r * c`), we must **return the original matrix**.

---

## 🛠️ Key Points  
- Flatten the original matrix into a **1D sequence** in row-major order.  
- Map each element’s 1D position `pos` back into the new 2D coordinates:
  - `new_row = pos / c`
  - `new_col = pos % c`
- Fill the reshaped matrix using these computed indices.

---

## 💡 Intuition  
Think of the matrix as a single linear list of numbers read row by row.  
Reshaping just changes how we **group** these numbers into rows and columns —  
the overall order remains exactly the same.  

This is similar to **flattening and then slicing** the sequence into new row lengths.

---

## ⏱️ Complexity  
- **Time:** `O(m * n)` — each element is moved once.  
- **Space:** `O(r * c)` — the new reshaped matrix.
