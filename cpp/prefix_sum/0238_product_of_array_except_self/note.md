# 0238 - Product of Array Except Self

## 🧠 Idea

Use **prefix products** (left to right) and **suffix products** (right to left) to calculate the result for each index **without using division**.

- For each position `i`, the result is:
  - `answer[i] = product of all elements to the left of i`  `*`  `product of all elements to the right of i`

- This can be done in **two passes**:
  - Left-to-right pass to compute **left product** for each index.
  - Right-to-left pass to accumulate **right product** and multiply it into the answer.

## 🔁 Step-by-step

1. Initialize a result array `res` with `1`s.
2. From left to right:
   - For each index `i`, set `res[i] = res[i - 1] * nums[i - 1]`.
   - This stores **product of all elements to the left of `i`**.
3. From right to left:
   - Initialize `right = 1`.
   - For each index `i` from the end to the start:
     - Multiply `res[i] *= right`.
     - Update `right *= nums[i]`.

## 🛠️ Key Points

- The trick is to compute left and right products **without using extra space**, aside from the output array.
- The input array is not modified.
- Only one pass is needed in each direction.
- Division is not used, as required by the problem.

## ⏱️ Complexity

- **Time:** O(n) — two linear passes.
- **Space:** O(1) extra — output array not counted as extra space.
