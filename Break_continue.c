#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    int j;
    for (j = 0; j < 6; j++) {
        if (j == 2) {
            continue;
        }
        if (j == 4) {
            break;
        }
        printf("%d\n", j);
    }
    printf("\n===========\n");

    int myNumbers[] = {3, -1, 7, 0, 9};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int z;

    for (z = 0; z < length; z++) {
        if (myNumbers[z] < 0) {
            continue;
        }
        if (myNumbers[z] == 0) {
            break;
        }
        printf("%d\n", myNumbers[z]);
    }
    return 0;
}