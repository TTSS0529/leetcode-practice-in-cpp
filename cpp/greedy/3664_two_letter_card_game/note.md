# 3664 - Two Letter Card Game

## 🧠 Idea

We are asked to calculate the **maximum score** in a card game where:

- Each card has **two letters**.  
- There is a **special letter `x`**.    
- We need to **maximize the number of pairs** following the rules.

This is a **Counting / Greedy** problem.

---

## 🔁 Step-by-step

1. Initialize counters:  
   - `both` → number of cards with both letters equal to `x`.  
   - `left[26]` → counts of cards where `x` is on the right side.  
   - `right[26]` → counts of cards where `x` is on the left side.  

2. Traverse all cards and update the above counts:  
   - `card[0] == x && card[1] == x` → increment `both`.  
   - `card[0] == x` → increment `right[card[1]-'a']`.  
   - `card[1] == x` → increment `left[card[0]-'a']`.  

3. Define a helper `interPair(count)` to calculate:  
   - Maximum **pairs** among cards with one `x`.  
   - Remaining **leftovers** that cannot form pairs.  

4. Compute `pairL = interPair(left)` and `pairR = interPair(right)`.  
   - Total pairs = `pairL.first + pairR.first`  
   - Total leftovers = `pairL.second + pairR.second`  

5. Use `both` cards to match **leftovers**:  
   - `use = min(both, leftover)`  
   - Update `both -= use`  
   - Increment result `res = pairs + use`  

6. Remaining `both` cards can form extra pairs:  
   - Add `min(pairs, both / 2)` to `res`.  

7. Return the final `res`.

---

## 🛠️ Key Points

- Split cards into **three categories**: both `x`, left `x`, right `x`.  
- Use **greedy pairing** with leftovers.  
- The `interPair` function ensures we **maximize pairs** from cards with `x`.  
- Carefully handle leftover `both` cards for additional scoring.

---

## ⏱️ Complexity

- **Time:** `O(n + 26)` → traverse all `n` cards, process 26 letters.  
- **Space:** `O(26 * 2)` → two arrays for left/right letters.
