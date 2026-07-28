#include <stdio.h>

void myFunction(int x, int y) {
    int modulus = x % y;
    printf("The result is : %d", modulus);
}

int main() {
    myFunction(10, 3);
}