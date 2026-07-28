#include <stdio.h>

int main() {
    int data[] = {3, 6, 2, 4, 1, 5, 9, 8, 7};
    int n = 9;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    
    printf("Data 1 is Sorted : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    
    int array[] = {40, 50, 60, 70, 65};
    int elemen = 5;
    
    for (int i = 0; i < elemen - 1; i++) {
        int tukar = 0;
        for (int j = 0; j < elemen - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int hasil = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hasil;
                tukar = 1;
            }
        }
        if (tukar == 0) {
            break;
        }
    }
    
    printf("\nData 2 is Sorted : ");
    for (int i = 0; i < elemen; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    printf("Matriks 2 * 3 : \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}