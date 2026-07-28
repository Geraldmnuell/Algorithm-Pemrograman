#include <stdio.h>
#include <string.h>

int main () {
    int nilai_mahasiswa[] = {75, 80, 65, 90, 85, 70};
    int n = sizeof(nilai_mahasiswa) / sizeof(nilai_mahasiswa[0]);
    int cari;
    int found = 0;

    printf("Masukkan nilai yang ingin dicari : ");
    scanf("%d", &cari);

    for (int i = 0; i < n; i++) {
        if (nilai_mahasiswa[i] == cari) {
            printf("Ditemukan di indeks ke %d", i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Nilai tidak ada dalam daftar\n");
    }

    char buku[][50] = {
        "Algoritma",
        "Pemrogramana C",
        "Basis Data",
        "Aljabar Linear",
        "Metode Numerik"
    };

    int m = sizeof(buku) / sizeof(buku[0]);
    printf("%d", m);

    return 0;
}