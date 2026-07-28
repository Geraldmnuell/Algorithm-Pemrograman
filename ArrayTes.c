#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double avg = (double)sum / n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }

    printf("%.2lf %d\n", avg, count);

    return 0;
}