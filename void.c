#include <stdio.h>

void ubahnilai(int *x) {
    *x = 10;
}

int main() {
    int angka = 5;
    ubahnilai(&angka);
    printf("%d\n", angka);
    return 0;
}
