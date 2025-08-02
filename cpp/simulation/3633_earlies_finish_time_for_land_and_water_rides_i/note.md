# 3633 - Earliest Finish Time for Land and Water Rides I

## 🧠 Idea

We need to choose exactly one land ride and one water ride and decide in which order to take them so that the **overall finishing time** is minimized.

For each **land ride**, we iterate over all **water rides** and consider:

- **Case 1: The water ride ends before the land ride opens**  
  → Just take the land ride at its opening time.  
  Finish = `landStart + landDuration`.

- **Case 2: The water ride starts after the land ride finishes**  
  → Take land first, then water.  
  Finish = `waterStart + waterDuration`.

- **Case 3: Time intervals overlap**  
  → Try both possible orders:
  - **water → land:** finish at `waterStart + waterDuration + landDuration`
  - **land → water:** finish at `landStart + landDuration + waterDuration`

We take the **minimum finishing time** for this land ride among all water rides and finally return the overall minimum.

> ⚠️ Although we check both orders inside the loop, this solution is effectively **O(n × m)** and passes due to small constraints.

> 📌 LeetCode **3635** is the follow-up to this problem with larger input size. There, this brute-force idea will **TLE** and needs an optimized solution (sorting + heap/two pointers) — refer to note of **3635** for that.

---

## 🔍 Key Points

- Brute-force enumeration over all pairs is sufficient here.
- Interval relationship is used to prune unnecessary calculations.
- The follow-up problem (3635) requires an optimized approach.

## ⏱️ Complexity

| Type | Complexity        |
|------|-------------------|
| Time | O(n × m)          |
| Space| O(1)              |
