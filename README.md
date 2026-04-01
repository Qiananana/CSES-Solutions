# CSES Solutions 🚀
My C++ solutions for the CSES Problem Set.

## Notes & Core Logic
* **Weird Algorithm**: Simulation. Beware of `long long` overflow during the $3n+1$ process.
* **Missing Number**: Math sum. Use $n(n+1)/2$ minus the actual sum.
* **Repetitions**: Linear scan / Sliding window. Keep track of current and max streak.
* **Increasing Array**: Greedy strategy. Always make the current element equal to the previous one if it's smaller.
* **Permutations**: Construction. Print all even numbers first, then all odd numbers to avoid adjacent difference of 1.
* **Number Spiral**: Math pattern. Determine the layer using $max(y, x)$, and use parity (odd/even) to find the direction.
