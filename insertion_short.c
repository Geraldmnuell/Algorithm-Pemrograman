#include <stdio.h>

int main () {
    int data[] = {29, 10, 14, 37, 13};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }

    printf("Data sudah terurut (1) : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    printf("\n");
    
    int array[] = {34, 56, 23, 45, 67, 100, 78, 42, 12, 2};
    int panjang = sizeof(array) / sizeof(array[0]);
    int x, y, target;

    for (x = 1; x < panjang; x++) {
        target = array[x];
        y = x - 1;

        while (y >= 0 && array[y] > target) {
            array[y + 1] = array[y];
            y--;
        }
        array[y + 1] = target;
    }
    printf("Data sudah terurut (2) : ");
    for (int k = 0; k < panjang; k++) {
        printf("%d ", array[k]);
    }

    return 0;
}