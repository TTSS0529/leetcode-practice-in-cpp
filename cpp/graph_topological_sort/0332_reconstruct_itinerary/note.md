# 332 - Reconstruct Itinerary

### 🧠 Idea  
We need to **reconstruct the itinerary** from a list of flight tickets such that:  
1. **All tickets are used exactly once**.  
2. The itinerary **starts from "JFK"**.  
3. If multiple valid itineraries exist, return the **lexicographically smallest** one.  

👉 The trick is to view this as a **graph traversal problem**:  
- Each airport is a **node**, each ticket is a **directed edge**.  
- We need to find a path that **visits every edge exactly once** (Eulerian path).  
- Always choose the **smallest lexical next airport** to ensure the itinerary is minimal.

---

### 💡 Intuition  
- Imagine **walking through a graph**, consuming tickets as you go.  
- When you reach an airport with no outgoing tickets, you **record it**.  
- Backtracking ensures that **all tickets are used**, and the **reversed path** gives the correct order.  
- Using a sorted structure for destinations guarantees the **lexicographically smallest path**.

---

### ⏱️ Complexity  
- **Time:** O(E log E) → visiting each ticket once, sorting destinations.  
- **Space:** O(V + E) → storing the graph and the result path.
  - E = number of tickets (edges)
  - V = number of airports (nodes in the graph)
