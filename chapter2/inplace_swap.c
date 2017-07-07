#include <stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    printf("step1 : %d, %d \n", *x, *y);

    *x = *x ^ *y;
    printf("step2 : %d, %d \n", *x, *y);

    *y = *x ^ *y;
    printf("step3 : %d, %d \n", *x, *y);
}

int main() {
    int a = (int)'a';
    int b = (int)'b';

    inplace_swap(&a, &b);

    return 0;
}
