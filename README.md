# CSES Solutions 🚀

This repository contains my C++ solutions for the [CSES Problem Set](https://cses.fi/problemset/). 
Currently focusing on building fundamental algorithmic thinking and mathematical modeling skills.

## 📝 Problem Notes & Logic Patterns

| # | Problem | Core Logic / Pattern | Key Insight |
| :--- | :--- | :--- | :--- |
| 1 | **Weird Algorithm** | Simulation | Use `long long` to prevent overflow during the $3n+1$ process. |
| 2 | **Missing Number** | Mathematics | Calculate the expected sum $n(n+1)/2$ and subtract the actual sum. |
| 3 | **Repetitions** | Linear Scan | Track the current streak and update the global maximum. |
| 4 | **Increasing Array** | Greedy Strategy | Always increase the current element to match the previous one to minimize moves. |
| 5 | **Permutations** | Construction | Group **even** numbers first, then **odd** numbers to ensure adjacent difference $\ge 2$. |
| 6 | **Number Spiral** | Math & Parity | Use $max(y, x)$ to identify the "layer" and parity (odd/even) to determine direction. |
| 7 | **Two Knights** | Complementary Counting | Total ways $C(k^2, 2)$ minus attacking pairs found in $2 \times 3$ and $3 \times 2$ blocks. |

## 🛠️ Tech Stack
* **Language:** C++17
* **Environment:** VS Code (MinGW-w64)
* **Strategy:** Efficient $O(n)$ or $O(1)$ solutions with Fast I/O.

## 📈 Progress
- [x] Introductory Problems (7 / 19)
- [ ] Sorting and Searching (0 / 35)
