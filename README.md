# 0-1 Knapsack Problem in C (Recursive)

This is an implementation of the 0-1 knapsack problem in C using a recursive approach. The problem consists of a set of items, each with a weight and a value, and a knapsack with a maximum weight capacity. The goal is to determine the subset of items that maximizes the total value of the knapsack without exceeding its weight capacity.

## How to use

To use this implementation, include the `knapsack_recursive.c` file in your project and call the `knapSackRecursive()` function with the following parameters:

- `W`: the maximum weight capacity of the knapsack
- `wt[]`: an array of weights for each item
- `val[]`: an array of values for each item
- `n`: the number of items

The function will return the maximum value that can be put in the knapsack without exceeding its weight capacity.

```c
#include "knapsack_recursive.c"

int main() {
    int W = 50;
    int wt[] = {10, 20, 30};
    int val[] = {60, 100, 120};
    int n = sizeof(wt)/sizeof(wt[0]);
    printf("%d", knapSackRecursive(W, wt, val, n));
    return 0;
}
```

### Time and Space Complexity

The time complexity of this implementation is `O(2^n)` where `n` is the number of items, W is the knapsack capacity. The space complexity is `O(n)` for the recursive call stack.

### Note

This is a naive implementation of the problem, it will have exponential time complexity and will not be efficient for large inputs. Consider using dynamic programming techniques such as Memoization or Tabulation to improve the performance.

I hope this implementation helps you solve the 0-1 knapsack problem in your project. If you have any questions or suggestions, feel free to reach out.

Copyright (c) 2022, Max Base
