#include <stdio.h>

int main() {
    // ARRAY
    int myNumbers[] = {1, 2, 3, 4, 5};
    printf("%d\n", myNumbers[1]);

    int number[] = {10, 20, 30, 40, 50};
    number[2] = 100;
    printf("%d\n", number[2]);

    // ARRAY SIZE
    int array[] = {3, 4, 64, 67, 23, 65};
    printf("%zu\n", sizeof(array));

    float angka[] = {5.2, 4.6, 6.3, 32.76, 53.34};
    int length = sizeof(angka) / sizeof(angka[0]);
    printf("%d\n", length);

    // ARRAY LOOP
    int loop[] = {25, 50, 75, 100};
    int panjang = sizeof(loop) / sizeof(loop[0]);
    int i;

    for (i = 0; i < panjang; i++) {
        printf("%d\n", loop[i]);
    }

    // REAL LIFE EXAMPLE
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum = 0;
    int j;
    int total = sizeof(ages) / sizeof(ages[0]);
    
    for (j = 0; j < total; j++) {
        sum = sum + ages[j];
    }
    avg = sum / total;
    printf("The Avarage is : %.2f\n", avg);
    
    int umur[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int k;
    int banyaknya = sizeof(umur) / sizeof(umur[0]);
    int lowUmur = umur[0];

    for (k = 0; k < banyaknya; k++) {
        if (lowUmur > umur[k]) {
            lowUmur = umur[k];
        }
    }
    printf("Jadi hasilnya adalah : %d\n", lowUmur);

    // MULTIDIMENSIONAL MATRIKS (ARRAYS)
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    int x, y;

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 3; y++) {
            printf("%d\n", matrix[x][y]);
        }
    }

    // ANOTHER EXAMPLE
    int example[2][4][3] = {
    {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}
    }, 
    {
        {13, 14, 15}, {16, 17, 18}, {19, 20, 21}, {22, 23, 24}
    }
    };
    
    int a, b, c;

    for (a = 0; a < 2; a++) {
        printf("Block %d:\n", a + 1);
        for (b = 0; b < 4; b++) {
            for (c = 0; c < 3; c++) {
                printf("%d ", example[a][b][c]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}