#include "0-1knapsack_recursive.c"

int main()
{
    int W = 50;
    int wt[] = {10, 20, 30};
    int val[] = {60, 100, 120};
    int n = sizeof(wt)/sizeof(wt[0]);

    int max_value = knapSackRecursive(W, wt, val, n);
    printf("Maximum value that can be put in knapsack: %d\n", max_value);

    return 0;
}
