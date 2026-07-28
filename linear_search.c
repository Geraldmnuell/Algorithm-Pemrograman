#include <stdio.h>
#include <string.h>

int main() {
    int array[] = {4, 5, 6, 7, 8};

    int key = 8;
    int found = 0;

    for (int i = 0; i < 5; i++) {
        printf("Mengecek indeks ke- %d\n", i);
        if (array[i] == key) {
            printf("ditemukan di indeks ke %d\n", i);
            found = 1;
            break;
        }
    }
    
    if (!found)
    printf("Data tidak ditemukan, maaf eeh\n");

    int tempat[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 5;
    int cari = 1;

    for (int i = 0; i < n; i++) {
        if (tempat[i] == cari) {
            printf("Data ditemukan di awal\n");
        }
    }

    char text[] = "VIVAFATEK";
    char search = 'F';
    int found2 = 0;
    int m = strlen(text);

    for (int i = 0; i < m; i++) {
        if (text[i] == search) {
            printf("Character di temukan pada indeks ke : %d\n", i);
            found2 = 1;
            break;
        }
    }

    if (!found2) 
    printf("data salah masukkk brooo");

    // SENTINEL LINEAR SEARCH
    int angka[] = {2, 4, 6, 8, 10};
    int cari = 4;
    int i = 0;
    
    angka[5] = cari;
    
    while (angka[i] != cari) {
        i++;
    }
    
    if (i < 5) {
        printf("Ditemukan di indeks %d\n", i);
    } else {
        printf("Data tidak ditemukan");
    }
    return 0;
    
}