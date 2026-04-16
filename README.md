# 🏆 CSES Problem Set Solutions
> A structured journey through competitive programming challenges, focusing on mathematical modeling and algorithmic efficiency.

## 📊 Progress Dashboard
- [x] **Introductory Problems** (11 / 19) - *Over 50% Complete!* 🚀
- [ ] **Sorting and Searching** (0 / 35)
- [ ] **Dynamic Programming** (0 / 19)

---

## 🧠 Strategic Logic Board

| # | Problem | Category | Key Strategic Insight | Complexity |
| :--- | :--- | :--- | :--- | :--- |
| 1 | **Weird Algorithm** | Simulation | Collatz conjecture simulation with `long long` overflow protection. | $O(log n)$ |
| 2 | **Missing Number** | Math | Arithmetic series sum: $Gap = \sum_{1}^{n} i - \sum Actual$. | $O(n)$ |
| 3 | **Repetitions** | Two Pointers | Linear scan to track the longest identical DNA subsequence. | $O(n)$ |
| 4 | **Increasing Array** | Greedy | Local adjustment: $a[i] = max(a[i], a[i-1])$ to ensure non-decreasing. | $O(n)$ |
| 5 | **Permutations** | Construction | Parity-based grouping (Even first, then Odd) for $dist \ge 2$. | $O(n)$ |
| 6 | **Number Spiral** | Geometry | Layer identification via $max(y, x)$ with parity-based traversal. | $O(1)$ |
| 7 | **Two Knights** | Combinatorics | **Inverse Thinking**: $Total - Attacking Pairs$ (found in $2\times3$ blocks). | $O(1)$ |
| 8 | **Two Sets** | Greedy/Math | Sum parity check + Reverse greedy construction for set partitioning. | $O(n)$ |
| 9 | **Bit Strings** | Modular Math | Iterative multiplication with constant modulo $10^9+7$ to prevent overflow. | $O(n)$ |
| 10 | **Trailing Zeros** | Number Theory | Legendre's Formula: Counting factors of 5 in $n!$ prime factorization. | $O(log_5 n)$ |
| 11 | **Coin Piles** | Algebra | Solving $x+2y=a, 2x+y=b$: Sum must be $3k$ and $max \le 2 \times min$. | $O(1)$ |

---

## 🛠️ Technical Implementation
- **Language**: C++17 / C++20
- **Optimization**: Fast I/O via `ios::sync_with_stdio(0); cin.tie(0);`
- **Safety**: Strict use of `long long` for all intermediate sums and products.

---

## 📖 Lessons Learned
* **The Power of Modulo**: In problems like *Bit Strings*, modulo isn't just a requirement; it's a tool to keep numbers within hardware limits.
* **Math Over Brute Force**: *Trailing Zeros* and *Coin Piles* taught me that a few minutes of algebraic derivation on paper saves hours of debugging inefficient code.
* **Greedy is Tricky**: *Two Sets* showed that while greedy seems simple, its correctness often relies on the underlying structure of the data (like continuous integers).

---
*“Complexity is the enemy of execution. Keep the logic sharp, keep the code clean.”*
