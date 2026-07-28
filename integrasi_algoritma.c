#include <stdio.h>
#include <string.h>

typedef struct {
    char kode[10];
    int stok;
    int batas_minimum;
} Alat;

void tampilkanAlat(Alat data[], int n) {
    printf("Kode\tStok\tBatas Minimun\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%d\n", data[i].kode, data[i].stok, data[i].batas_minimum);
    }
}

int cariAlat(Alat data[], int n, char target[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(data[i].kode, target) == 0) {
            return i;
        }
    }
    return -1;
}

void tampilkanStokRendah(Alat data[], int n) {
    printf("Alat dengan stok rendah : \n");
    for (int i = 0; i < n; i++) {
        if (data[i].stok < data[i].batas_minimum) {
            printf("%s Perlu ditambah stok nya\n", data[i].kode);
        }
    }
}

void urutBerdasarkanStok(Alat data[], int n) {
    int posisi_minimum;
    Alat temp;

    for (int i = 0; i < n - 1; i++) {
        posisi_minimum = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j].stok < data[posisi_minimum].stok) {
                posisi_minimum = j;
            }
        }
        temp = data[i];
        data[i] = data[posisi_minimum];
        data[posisi_minimum] = temp;
    }
}

int main() {
    Alat alat[] = {
        {"A01", 12, 5},
        {"A02", 3, 5},
        {"A03", 8, 4},
        {"A04", 2, 3},
        {"A05", 10, 6} 
    };
    int n = 5;

    printf("KODE AWAL ALAT\n");
    tampilkanAlat(alat, n);

    int posisi;

    char kode_dicari[] = "A03";

    posisi = cariAlat(alat, n, kode_dicari);
    if (posisi != -1) {
        printf("\n%s Stok %d\n", kode_dicari, alat[posisi].stok);
    } else {
        printf("\n%s stok tidak ada\n", kode_dicari);
    }
    
    printf("\n");
    tampilkanStokRendah(alat, n);

    urutBerdasarkanStok(alat, n);
    printf("\nData urut stok:\n");
    tampilkanAlat(alat, n);
    
    return 0;
}