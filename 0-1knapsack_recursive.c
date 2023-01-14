#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int knapSackRecursive(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0) return 0;
    else if (wt[n-1] > W) return knapSackRecursive(W, wt, val, n-1);
    else return MAX(
        val[n-1] + knapSackRecursive(W-wt[n-1], wt, val, n-1),
        knapSackRecursive(W, wt, val, n-1)
    );
}
