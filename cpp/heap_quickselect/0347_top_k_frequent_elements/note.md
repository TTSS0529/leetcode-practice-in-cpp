# 0347 - Top K Frequent Elements

## 🧠 Idea

We are asked to find the **k most frequent elements** in an **unsorted array** of integers.  

**Constraints:**  
- `1 <= nums.length <= 10^5`  
- `1 <= k <= number of unique elements`  

**Key insights:**  
- Count the frequency of each element.  
- After counting, we can either:  
  1. Use **bucket sort** based on frequency (`O(n)` average).  
  2. Use **quickselect** to partially sort the frequencies (`O(n)` average).  

---

## 🟢 Method 1 — Bucket Sort

**Idea:**  
- Maximum frequency ≤ `n`.  
- Create a `vector<vector<int>> buckets` where `buckets[i]` stores numbers appearing `i` times.  
- Iterate from **high frequency to low**, collecting elements until we have `k`.  

### 🔁 Step-by-step

1. Count frequency of each number using `unordered_map<int, int> counts`.  
2. Find `max_count` among all frequencies.  
3. Initialize buckets: `vector<vector<int>> buckets(max_count + 1)`.  
4. For each `(num, freq)` in `counts`, push `num` into `buckets[freq]`.  
5. Initialize result vector `res`.  
6. Loop `i = max_count → 0` and push elements from `buckets[i]` into `res` until `res.size() == k`.  

### ⏱️ Complexity

- **Time:** `O(n)` — counting + bucketing + collecting top k.  
- **Space:** `O(n)` — for `unordered_map` and `buckets`.

---

## 🔵 Method 2 — Quickselect

**Idea:**  
- Count frequencies and store as `vector<pair<int,int>> freq`.  
- Use **nth_element** to partially sort so that the top `k` frequent elements are in the first `k` positions.  

### 🔁 Step-by-step

1. Count frequency of each number using `unordered_map<int, int> counts`.  
2. Copy `(num, freq)` pairs into `vector<pair<int,int>> freq`.  
3. Apply `nth_element` with a **custom comparator** `(a.second > b.second)` to ensure **top k frequencies** are in the first k positions.  
4. Collect the first `k` elements from `freq` into `res`.  

### ⏱️ Complexity

- **Time:** `O(n)` average, `O(n²)` worst-case (rare).  
- **Space:** `O(n)` — for `unordered_map` and `vector<pair<int,int>>`.  

---

## 🛠️ Key Points

- **Counting:** `unordered_map` allows `++counts[num]` even for first occurrence.  
- **Bucket sort:** guarantees `O(n)` and is simple to implement.  
- **Quickselect:** faster in practice on LeetCode for moderate `n`; only partially sorts the array.  
- **Choosing method:** bucket sort is simpler and deterministic; quickselect is slightly trickier but often faster.
