#include <stdio.h>

int main() {
    // ANATOMI SELECTION SHORT 
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    int data[] = {4, 3, 7, 2, 6, 1, 8, 9, 5};
    int m = 9;
    int min, tomp;

    for (int x = 0; x < m - 1; x++) {
        min = x;

        for (int y = x + 1; y < m; y++) {
            if (data[y] < data[min]) {
                min = y;
            }
        }
        tomp = data[x];
        data[x] = data[min];
        data[min] = tomp;
    }

    printf("Data 2 is Sortedd : ");
    for (int i = 0; i < m; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}