//
// Created by mo_ on 09/02/24.
//

#include <stdio.h>
#include <stdlib.h>


int fib(long int n, int *memo) {
    if (memo[n] != -1)
       return memo[n];
    if (n == 1 || n == 2)
        return 1;
    int result = fib(n - 1, memo) + fib(n - 2, memo);
    memo[n] = result;
    return result;
}

int main(int argc, char* argv[]) {
    if (argc > 2) {
        return -1;
    }
    int n = atoi(argv[1]);

    int *memo = (int *) malloc((n+1)*sizeof(int));
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    fprintf(stdout, "Fibonacci %d-th term = %d\n", n, fib(n, memo));
    free(memo);

    return 0;
}
