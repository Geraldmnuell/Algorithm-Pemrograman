#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    int a;
    for (a = 0; a <= 10; a = a + 2) {
        printf("%d\n", a);
    }

    int sum = 0;
    int b;
    for (b = 1; b <= 6; b++) {
        sum = sum + b;
    }
    printf("Sum is %d\n", sum);

    int c;
    for (c = 5; c > 0; c--) {
        printf("%d\n",c);
    }

    int x, y;
    for (x = 1; x <= 2; x++) {
        printf("Outer : %d\n", x);
        for (y = 1; y <= 3; y++) {
            printf(" Inner : %d\n", y);
        }
    }

    int p, q;
    for (p = 1; p <= 3; p++) {
        for (q = 1; q <= 3; q++) {
            printf("%d ", p * q);
        }
        printf("\n");
    }
    return 0;
}