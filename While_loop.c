#include <stdio.h>

int main() {
    int i = 1;
    int total = 0;

    while (i <= 5) {
        if (i % 2 == 0) {
            total = total + 1;
        }
        i++;
    }
    printf("Jumlah angka = %d\n", total);
    return 0;
}