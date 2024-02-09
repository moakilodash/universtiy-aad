//
// Created by mo_ on 09/02/24.
//

#include <stdio.h>
#include <stdlib.h>


int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char* argv[]) {
    if (argc > 2) {
        return -1;
    }
    int n = atoi(argv[1]);
    fprintf(stdout, "%d\n", fib(n));
    return 0;
}
