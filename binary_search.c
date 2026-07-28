#include <stdio.h>

int main() {
    int array[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int search = 25;
    int found = 0;
    int n = 10;
    int kiri = 0, kanan = n - 1, tengah;

    while (kiri <= kanan) {
        tengah = (kiri + kanan) / 2;

        if (array[tengah] == search) {
            found = 1;
            break;
        } else if (array[tengah] < search) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }
    if (found) {
        printf("data ditemukan pada indeks ke %d\n", tengah);
    } else {
        printf("data not found!!!");
    }
    return 0;
}