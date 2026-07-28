#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);

    // WITH USER INPUT
    int number;

    do {
        printf("Input A Positive Number : ");
        scanf("%d", &number);
    } while (number > 0);

    return 0;
}