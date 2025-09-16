# 0451 - Sort Characters By Frequency

## 🧠 Idea

We are asked to **sort characters in a string by their frequency in descending order**.  

Constraints:  
- `1 <= s.length <= 5 * 10^5`  
- The string consists of **ASCII characters**.  

**Key insights:**  
- Count the **frequency of each character**.  
- Characters with the same frequency can be **grouped together**.  
- Use **bucket sort** or a similar strategy to efficiently arrange characters by frequency.

---

## 🔁 Step-by-step

1. **Count frequencies** of all characters in the string.  
2. **Group characters** by their frequency (characters appearing the same number of times go together).  
3. **Build the result string** from characters with **highest frequency to lowest frequency**.  

---

## 🛠️ Key Points

- **Bucket sort by frequency** avoids explicitly sorting all characters.  
- **ASCII constraint** allows using a fixed-size array for counting.  
- Preprocessing and grouping make the construction of the result **efficient**.  

---

## ⏱️ Complexity

- **Time:** `O(n)` — counting frequencies, building buckets, and concatenating results.  
- **Space:** `O(n)` — storage for frequency buckets and result string.  
